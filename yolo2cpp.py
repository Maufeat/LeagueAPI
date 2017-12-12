from swag2yolo import *
template_hpp_0 = """#pragma once
#include <json.hpp>
#include <optional>
#include <type_traits>
#include <SimpleWeb/crypto.hpp>
#include <SimpleWeb/client_https.hpp>
#include <SimpleWeb/client_wss.hpp>
namespace nlohmann {
  template <typename T>
  struct adl_serializer<std::optional<T>> {
    static inline void to_json(json& j, const std::optional<T>& opt) {
      if(opt)
        j = *opt;
      else
        j = nullptr;
    }
    static inline void from_json(const json& j, std::optional<T>& opt) {
      if(j.is_null())
        opt.reset();
      else
        opt = j.get<T>();
    }
  };
}

namespace League {
  using json = nlohmann::json; """
template_hpp_1 = """
  using Error = LolLobbyAmbassadorMessage;
  using HttpsClient = SimpleWeb::Client<SimpleWeb::HTTPS>;
  using HttpsArgs = std::multimap<std::string, std::optional<std::string>>;
  using HttpsResponse = std::shared_ptr<HttpsClient::Response>;
  using std::to_string;
  static inline std::string to_string(const std::string& v) {
    return v;
  }
  static inline std::string to_string(const json& j) {
    if (j.is_string())
      return j.get<std::string>();
    return j.dump();
  }
  template<typename T>
  static inline std::optional<std::string> to_string(const std::optional<T>& o) {
    if (o)
      return to_string(*o);
    return std::nullopt;
  }
  template<typename T>
  struct Result {
    std::optional<Error> error;
    T data;
    Result(const HttpsResponse& r) {
      std::string content_type;
      const std::string& status_code = r->status_code;
      const std::string& _data = r->content.string();
      if(auto it = r->header.find("content-type"); it != r->header.end())
        content_type = it->second;
      if(status_code != "200" && content_type == "application/json")
        error = json::parse(_data).get<Error>();
      else if(status_code != "200")
        error = {_data, content_type, status_code};
      else
        data = json::parse(_data).get<T>();
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
    std::optional<Error> error;
    json data;
    Result(const HttpsResponse& r) {
      std::string content_type;
      const std::string& status_code = r->status_code;
      const std::string& _data = r->content.string();
      if(auto it = r->header.find("content-type"); it != r->header.end())
        content_type = it->second;
      if(status_code != "200" && content_type == "application/json")
        error = json::parse(_data).get<Error>();
      else if(status_code != "200")
        error = {_data, content_type, status_code};
      else if(content_type == "application/json")
        data = json::parse(_data);
      else
        data = _data;
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
    std::optional<Error> error;
    json data;
    Result(HttpsResponse& r) {
      std::string content_type;
      const std::string& status_code = r->status_code;
      const std::string& _data = r->content.string();
      if(auto it = r->header.find("content-type"); it != r->header.end())
        content_type = it->second;
      if(status_code != "204" && content_type == "application/json")
        error = json::parse(_data).get<Error>();
      else if(status_code != "204")
        error = {_data, content_type, status_code};
    }
    explicit operator bool() const {
      return error != std::nullopt;
    }
    bool operator!() const {
      return error == std::nullopt;
    }
  };
  struct LeagueClient {
    std::string _host_;
    std::string _auth_;
    
    LeagueClient(const std::string& address, int port, const std::string& password) :
      _host_(address + ":" + std::to_string(port)),
      _auth_("Basic " + SimpleWeb::Crypto::Base64::encode("riot:" + password))
    { }
    
    static SimpleWeb::CaseInsensitiveMultimap Args2Headers(const HttpsArgs& args) {
      SimpleWeb::CaseInsensitiveMultimap map;
      for(const auto& it: args)
        if(it.second)
          map.insert({it.first, *(it.second)});
      return map;
    }
"""
template_hpp_2 = """
  };
}
"""

#struct definitions
template_definition = """
  {ISENUM}struct {NAME} {{ {FIELDS} {VALUES}
  }};
  template<typename V=void>
  void to_json(json& j, const {NAME}& v) {{{ENUM_TO}{STRUCT_TO}
  }}
  template<typename V=void>
  void from_json(const json& j, {NAME}& v) {{{ENUM_FROM}{STRUCT_FROM}
  }} """
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

template_op_arg_r = 'const {TYPE}& {NAME}'
template_op_arg_o = 'const {TYPE}& {NAME} = std::nullopt'
template_op_arg = '{{ "{name}", to_string({NAME}) }}'
template_op_empty = """
template<typename V=void>
Result<{RETURNS}> {NAME}({ARGS})
{{
  HttpsClient _client(_host_, false);
  return _client.request("{method}", "{PATH}?" + SimpleWeb::QueryString::create(Args2Headers({{ {ARGS_QUERY} }})), "",
    Args2Headers({{ {{"Authorization", _auth_}}, {ARGS_HEADER} }}) );
}} """
template_op_form = """
template<typename V=void>
Result<{RETURNS}> {NAME}({ARGS})
{{
  HttpsClient _client(_host_, false);
  return _client.request("{method}", "{PATH}?" + SimpleWeb::QueryString::create(Args2Headers({{ {ARGS_QUERY} }})),
    Args2String({{ {ARGS_FORM} }}), Args2Headers({{ {{"Authorization", _auth_}}, {{"content-type", "application/x-www-form-urlencoded"}}, {ARGS_HEADER} }}) );
}} """
template_op_json = """
template<typename V=void>
Result<{RETURNS}> {NAME}({ARGS})
{{
  HttpsClient _client(_host_, false);
  return _client.request("{method}", "{PATH}?" + SimpleWeb::QueryString::create(Args2Headers({{ {ARGS_QUERY} }})), json({ARGS_BODY}).dump(),
    Args2Headers({{ {{"Authorization", _auth_}}, {{"content-type", "application/json"}}, {ARGS_HEADER} }}) );
}} """

def generate_cpp(yolo, folder):
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
    lookup = { definition["name"]: definition for definition in yolo["definitions"]}
    result = []
    done = []
    def resolve(entry):
        if entry in done:
           return 
        for d in lookup[entry]["fields"]:
            if not d["type"]["elementType"] in builtins:
                resolve(d["type"]["elementType"])
            if not d["type"]["type"] in builtins:
                resolve(d["type"]["type"])
        done.append(entry)
        result.append(lookup[entry])
    for definition in yolo["definitions"]:
        resolve(definition["name"])
    yolo["definitions"] = result
    mkpath(folder)
    header =  open(folder + "/leagueclient.hpp", "w+")
    header.write(template_hpp_0)
    for definition in yolo["definitions"]:
        definition["NAME"] = "{0}".format(definition["name"].replace("-", "_"))
        for field in definition["fields"]:
            field["DNAME"] = definition["NAME"]
            field["NAME"] = field["name"].replace("-", "_")
            field["TYPE"] = type2cpp(field)
        for value in definition["values"]:
            value["DNAME"] = definition["NAME"]
            value["NAME"] = value["name"].replace("-", "_") + "_e"
        header.write(template_definition.format(**definition,
            VALUES = "".join([template_definition_values.format(**m) for m in definition["values"]]),
            FIELDS = "".join([template_definition_fields.format(**m) for m in definition["fields"]]),
            ISENUM = "enum " if definition["isEnum"] else "",
            ENUM_TO = "".join([template_enum_to.format(**m) for m in definition["values"]]),
            ENUM_FROM = "".join([template_enum_from.format(**m) for m in definition["values"]]),
            STRUCT_TO = "".join([template_struct_to.format(**m) for m in definition["fields"]]),
            STRUCT_FROM = "".join([template_struct_from.format(**m) for m in definition["fields"]])))
    header.write(template_hpp_1)
    for op in yolo["functions"]:
        op["NAME"] = op["name"].replace("-", "_")
        op["RETURNS"] = type2cpp(op["returns"])
        for arg in op["arguments"]:
            arg["NAME"] = arg["name"].replace("-", "_")
            arg["TYPE"] = type2cpp(arg)
        template = template_op_empty
        args_formdata = [template_op_arg.format(**arg) for arg in op["arguments"] if arg["in"] == "formData"]
        args_body = [arg["NAME"] for arg in op["arguments"] if arg["in"] == "body"]
        header.write((template_op_form if len(args_formdata) > 0 else (template_op_json if len(args_body) >0 else template_op_empty))
            .format(**op, ARGS = ", ".join(
            [template_op_arg_r.format(**arg) for arg in op["arguments"] if not arg["optional"]] +
            [template_op_arg_o.format(**arg) for arg in op["arguments"] if arg["optional"]]),
            ARGS_FORM = ",\n    ".join(args_formdata),
            ARGS_BODY = "".join(args_body),
            ARGS_HEADER = ",\n    ".join([template_op_arg.format(**arg) for arg in op["arguments"] if arg["in"] == "header"]),
            ARGS_QUERY = ",\n    ".join([template_op_arg.format(**arg) for arg in op["arguments"] if arg["in"] == "query"]),
            PATH = op["url"].format(**{arg["name"] : '"+to_string({0})+"'.format(arg["NAME"]) for arg in op["arguments"] if arg["in"] == "path" })))
    for event in yolo["events"]:
        event["NAME"] = event["name"].replace("-", "_")
        event["TYPE"] = type2cpp(event)
    header.write(template_hpp_2)
    header.close()
   
generate_cpp(json_load("yolo.json"), "output/cpp")
