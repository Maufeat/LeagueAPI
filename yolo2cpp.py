from swag2yolo import *
template_base_def = """#pragma once
#include <json.hpp>
#include <optional>
namespace nlohmann {
  template <typename T>
  struct adl_serializer<std::optional<T>> {
    static void to_json(json& j, const std::optional<T>& opt) {
      if(opt)
        j = *opt;
      else
        j = nullptr;
    }
    static void from_json(const json& j, std::optional<T>& opt) {
      if(j.is_null())
        opt.reset();
      else
        opt = j.get<T>();
    }
  };
}
namespace lol {
  using json = nlohmann::json;
} """

template_base_op = """#pragma once
#include <lol/base_def.hpp>
#include <lol/def/LolLobbyAmbassadorMessage.hpp>
#include <SimpleWeb/crypto.hpp>
#include <SimpleWeb/client_https.hpp>
#include <SimpleWeb/client_wss.hpp>
namespace lol {
  using Error = LolLobbyAmbassadorMessage;
  using HttpsClient = SimpleWeb::Client<SimpleWeb::HTTPS>;
  using HttpsArgs = std::multimap<std::string, std::optional<std::string>>;
  using HttpsResponse = std::shared_ptr<HttpsClient::Response>;
  using std::to_string;
  inline std::string to_string(const std::string& v) {
    return v;
  }
  inline std::string to_string(const json& j) {
    if (j.is_string())
      return j.get<std::string>();
    return j.dump();
  }
  template<typename T>
  inline std::optional<std::string> to_string(const std::optional<T>& o) {
    if (o)
      return to_string(*o);
    return std::nullopt;
  }
  template<typename T>
  struct Result {
    std::string content_type;
    std::string status_code;
    std::string content;
    std::optional<Error> error;
    T data;
    Result(const HttpsResponse& r) {
      status_code = r->status_code;
      content = r->content.string();
      if(auto it = r->header.find("content-type"); it != r->header.end())
        content_type = it->second;
      if(status_code != "200" && content_type == "application/json")
        error = json::parse(content).get<Error>();
      else if(status_code != "200")
        error = Error{content, content_type, status_code};
      else
        data = json::parse(content).get<T>();
    }
    T* operator->() {
      return &data;
    }
    const T& operator*() const {
      return data;
    }
    T& operator*() {
      return data;
    }
    explicit operator bool() const {
      return error != std::nullopt;
    }
    bool operator!() const {
      return error == std::nullopt;
    }
  };

  template<>
  struct Result<json> {
    std::string content_type;
    std::string status_code;
    std::string content;
    std::optional<Error> error;
    json data;
    Result(const HttpsResponse& r) {
      status_code = r->status_code;
      content = r->content.string();
      if(auto it = r->header.find("content-type"); it != r->header.end())
        content_type = it->second;
      if(status_code != "200" && content_type == "application/json")
        error = json::parse(content).get<Error>();
      else if(status_code != "200")
        error = Error{content, content_type, status_code};
      else if(content_type == "application/json")
        data = json::parse(content);
      else
        data = content;
    }
    json* operator->() {
      return &data;
    }
    const json& operator*() const {
      return data;
    }
    json& operator*() {
      return data;
    }
    explicit operator bool() const {
      return error != std::nullopt;
    }
    bool operator!() const {
      return error == std::nullopt;
    }
  };
  
  template<>
  struct Result<void> {
    std::string content_type;
    std::string status_code;
    std::string content;
    std::optional<Error> error;
    json data;
    Result(const HttpsResponse& r) {
      status_code = r->status_code;
      content = r->content.string();
      if(auto it = r->header.find("content-type"); it != r->header.end())
        content_type = it->second;
      if(status_code != "204" && content_type == "application/json")
        error = json::parse(content).get<Error>();
      else if(status_code != "204")
        error = Error{content, content_type, status_code};
    }
    explicit operator bool() const {
      return error != std::nullopt;
    }
    bool operator!() const {
      return error == std::nullopt;
    }
  };
  static SimpleWeb::CaseInsensitiveMultimap Args2Headers(const HttpsArgs& args) {
    SimpleWeb::CaseInsensitiveMultimap map;
    for(const auto& it: args)
      if(it.second)
        map.insert({it.first, *(it.second)});
    return map;
  }
  struct LeagueClient {
    std::string host;
    std::string auth;
    
    LeagueClient(const std::string& address, int port, const std::string& password) :
      host(address + ":" + std::to_string(port)),
      auth("Basic " + SimpleWeb::Crypto::Base64::encode("riot:" + password))
    { }
  };
}"""

template_include = '\n#include <lol/def/{0}.hpp>'

template_definition = """#pragma once
#include<lol/base_def.hpp> {INCLUDES}
namespace lol {{
  {ISENUM}struct {NAME} {{ {FIELDS} {VALUES}
  }};
  void to_json(json& j, const {NAME}& v) {{{ENUM_TO}{STRUCT_TO}
  }}
  void from_json(const json& j, {NAME}& v) {{{ENUM_FROM}{STRUCT_FROM}
  }}
}}"""
template_definition_fields = """
    {TYPE} {NAME};"""
template_definition_values = """
    {NAME} = {value},"""
template_enum_to = """
  if(v == {DNAME}::{NAME}) {{
    j = \"{name}\";
    return;
  }}"""
template_enum_from = """
  if(j.get<std::string>() == \"{name}\") {{
    v = {DNAME}::{NAME};
    return;
  }} """
template_struct_to = """
  j[\"{NAME}\"] = v.{NAME}; """
template_struct_from = """
  v.{NAME} = j.at(\"{NAME}\").get<{TYPE}>(); """

template_op_arg_r = ', const {TYPE}& {NAME}'
template_op_arg_o = ', const {TYPE}& {NAME} = std::nullopt'
template_op_arg = '{{ "{name}", to_string({NAME}) }}'
template_op_empty = """#pragma once
#include<lol/base_op.hpp> {INCLUDES}
namespace lol {{
  Result<{RETURNS}> {NAME}(const LeagueClient& _client{ARGS_R}{ARGS_O})
  {{
    HttpsClient _client_(_client.host, false);
    return _client_.request("{method}", "{PATH}?" + SimpleWeb::QueryString::create(Args2Headers({{ {ARGS_QUERY} }})), "",
      Args2Headers({{ {{"Authorization", _client.auth}}, {ARGS_HEADER} }}) );
  }}
}}"""
template_op_form = """#pragma once
#include<lol/base_op.hpp> {INCLUDES}
namespace lol {{
  Result<{RETURNS}> {NAME}(const LeagueClient& _client{ARGS_R}{ARGS_O})
  {{
    HttpsClient _client_(_client.host, false);
    return _client_.request("{method}", "{PATH}?" + SimpleWeb::QueryString::create(Args2Headers({{ {ARGS_QUERY} }})), Args2String({{ {ARGS_FORM} }}),
    Args2Headers({{ {{"Authorization", _client.host}}, {{"content-type", "application/x-www-form-urlencoded"}}, {ARGS_HEADER} }}) );
  }}
}}"""
template_op_json = """#pragma once
#include<lol/base_op.hpp> {INCLUDES}
namespace lol {{
  Result<{RETURNS}> {NAME}(const LeagueClient& _client{ARGS_R}{ARGS_O})
  {{
    HttpsClient _client_(_client.host, false);
    return _client_.request("{method}", "{PATH}?" + SimpleWeb::QueryString::create(Args2Headers({{ {ARGS_QUERY} }})), json({ARGS_BODY}).dump(),
      Args2Headers({{ {{"Authorization", _client.host}}, {{"content-type", "application/json"}}, {ARGS_HEADER} }}) );
  }}
}}"""

builtins = {
    "": "void",
    "bool": "bool", 
    "int8": "int8_t", 
    "uint8": "uint8_t",
    "int16": "int16_t", 
    "uint16": "uint16_t",
    "int32": "int32_t", 
    "uint32": "uint32_t",
    "int64": "int64_t", 
    "uint64": "uint64_t", 
    "float": "float", 
    "double": "double", 
    "object": "json", 
    "string": "std::string", 
    "map": "std::map<std::string, {0}>", 
    "vector": "std::vector<{0}>" 
}
def type2cpp(parent):
    def _type2cpp(typ):
        otherformat = "{0}"
        if not typ["type"] in builtins:
            return otherformat.format(typ["type"]) 
        if not typ["elementType"] == "":
            if not typ["elementType"] in builtins:
                return builtins[typ["type"]].format(otherformat.format(typ["elementType"])) 
            return builtins[typ["type"]].format(builtins[typ["elementType"]].format(typ["elementType"]))
        return builtins[typ["type"]]
    if "elementType" in parent:
        return _type2cpp(parent).replace("-", "_")
    t = _type2cpp(parent["type"]).replace("-", "_")
    return "std::optional<{0}>".format(t) if "optional" in parent and parent["optional"] else t
def include2cpp(parent, ret = ""):
    def _in(typ):
        if not typ["elementType"] in builtins:
            return typ["elementType"]
        return typ["type"] if not typ["type"] in builtins else ""
    result = { _in(t["type"]) for t in parent if not _in(t["type"]) == "" }
    if not ret == "":
        extra = _in(ret)
        if not extra == "":
            result.update({extra})
    return result

def generate_def(yolo, folder):
    mkpath(folder+"/lol/def")
    open(folder+"/lol/base_def.hpp", "w+").write(template_base_def)
    for definition in yolo["definitions"]:
        definition["NAME"] = "{0}".format(definition["name"].replace("-", "_"))
        for field in definition["fields"]:
            field["DNAME"] = definition["NAME"]
            field["NAME"] = field["name"].replace("-", "_")
            field["TYPE"] = type2cpp(field)
        for value in definition["values"]:
            value["DNAME"] = definition["NAME"]
            value["NAME"] = value["name"].replace("-", "_") + "_e"
        open("{0}/lol/def/{1}.hpp".format(folder, definition["name"]), "w+").write(template_definition.format(**definition,
            INCLUDES = "".join([template_include.format(i) for i in include2cpp(definition["fields"])]),
            VALUES = "".join([template_definition_values.format(**m) for m in definition["values"]]),
            FIELDS = "".join([template_definition_fields.format(**m) for m in definition["fields"]]),
            ISENUM = "enum " if definition["isEnum"] else "",
            ENUM_TO = "".join([template_enum_to.format(**m) for m in definition["values"]]),
            ENUM_FROM = "".join([template_enum_from.format(**m) for m in definition["values"]]),
            STRUCT_TO = "".join([template_struct_to.format(**m) for m in definition["fields"]]),
            STRUCT_FROM = "".join([template_struct_from.format(**m) for m in definition["fields"]])))

def generate_op(yolo, folder):       
    mkpath(folder+"/lol/op")
    open(folder+"/lol/base_op.hpp", "w+").write(template_base_op)
    for op in yolo["functions"]:
        op["NAME"] = op["name"].replace("-", "_")
        op["RETURNS"] = type2cpp(op["returns"])
        for arg in op["arguments"]:
            arg["NAME"] = arg["name"].replace("-", "_")
            arg["TYPE"] = type2cpp(arg)
        template = template_op_empty
        args_formdata = [template_op_arg.format(**arg) for arg in op["arguments"] if arg["in"] == "formData"]
        args_body = [arg["NAME"] for arg in op["arguments"] if arg["in"] == "body"]
        open("{0}/lol/op/{1}.hpp".format(folder, op["name"]), "w+").write(
            (template_op_form if len(args_formdata) > 0 else (template_op_json if len(args_body) >0 else template_op_empty))
            .format(**op,
            ARGS_R = "".join([template_op_arg_r.format(**arg) for arg in op["arguments"] if not arg["optional"]]),
            ARGS_O = "".join([template_op_arg_o.format(**arg) for arg in op["arguments"] if arg["optional"]]),
            ARGS_FORM = ",\n    ".join(args_formdata),       
            INCLUDES = "".join([template_include.format(i) for i in include2cpp(op["arguments"], op["returns"])]),
            ARGS_BODY = "".join(args_body),
            ARGS_HEADER = ",\n    ".join([template_op_arg.format(**arg) for arg in op["arguments"] if arg["in"] == "header"]),
            ARGS_QUERY = ",\n    ".join([template_op_arg.format(**arg) for arg in op["arguments"] if arg["in"] == "query"]),
            PATH = op["url"].format(**{arg["name"] : '"+to_string({0})+"'.format(arg["NAME"]) for arg in op["arguments"] if arg["in"] == "path" })))

def generate_cpp(yolo, folder):   
    generate_def(yolo, folder)   
    generate_op(yolo, folder)
generate_cpp(json_load("yolo.json"), "output/cpp")
