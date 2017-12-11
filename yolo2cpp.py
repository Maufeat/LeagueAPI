from swag2yolo import *
template = """#pragma once
#include <json.hpp>
#include <optional>
#include <SimpleWeb/client_https.hpp>
#include <SimpleWeb/crypto.hpp>
#include <type_traits>
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
namespace leagueapi {
  using json = nlohmann::json;
  template<typename T>
  static inline std::string as_string(const std::enable_if_t<std::is_arithmetic_v<T>,T>& v) {
    return std::to_string(v);
  }
  static inline std::string as_string(const std::string& v) {
    return v;
  }
  static inline std::string as_string(const json& j) {
    if (j.is_string())
      return j.get<std::string>();
    return j.dump();
  }
  template<typename T>
  static inline std::optional<std::string> as_string(const std::optional<T>& o) {
    if (o)
      return as_string(*o);
    return std::nullopt;
  }
  /*leagueapidefinitions*/
  struct Client {
    using HttpsClient = SimpleWeb::Client<SimpleWeb::HTTPS>;
    using HttpsResponse = std::shared_ptr<HttpsClient::Response>;
    using HttpsArgs = std::multimap<std::string, std::optional<std::string>>;
    using HttpsError = LolLobbyAmbassadorMessage;
    
    std::string _host_;
    std::string _auth_;
    
    Client(const std::string& address, int port, const std::string& password) :
      _host_(address + ":" + std::to_string(port)),
      _auth_("Basic " + SimpleWeb::Crypto::Base64::encode("riot:" + password))
    { }
    
    template<typename T>
    class HttpsResult {
    private:
      std::optional<HttpsError> mError;
      T mData;
    public:
      HttpsResult(const HttpsResponse& r) {
        std::string content_type;
        if(auto it = r->header.find("content-type"); it != r->header.end())
          content_type = it->second;
        const std::string& data = r->content.string();
        const std::string& status_code = r->status_code;
        if(status_code != "200" && content_type == "application/json")
          mError = json::parse(data).get<HttpsError>();
        else if(status_code != "200")
          mError = HttpsError {data, content_type, status_code};
        else
          mData = json::parse(data).get<T>();
      }
      const std::optional<HttpsError>& error() const {
        return mError;
      }
      T* operator->() {
        return &mData;
      }
      const T& operator*() const {
        return mData;
      }
      T& operator*() {
        return mData;
      }
      explicit operator bool() const {
        return mError != std::nullopt;
      }
      bool operator!() const {
        return mError == std::nullopt;
      }
    };
    
    template<>
    class HttpsResult<json> {
    private:
      std::optional<HttpsError> mError;
      json mData;
    public:
      HttpsResult(const HttpsResponse& r) {
        std::string content_type;
        if(auto it = r->header.find("content-type"); it != r->header.end())
          content_type = it->second;
        const std::string& data = r->content.string();
        const std::string& status_code = r->status_code;
        if(status_code != "200" && content_type == "application/json")
          mError = json::parse(data).get<HttpsError>();
        else if(status_code != "200")
          mError = HttpsError {data, content_type, status_code};
        else if(content_type == "application/json")
          mData = json::parse(data);
        else
          mData = data;
      }
      const std::optional<HttpsError>& error() const {
        return mError;
      }
      json* operator->() {
        return &mData;
      }
      const json& operator*() const {
        return mData;
      }
      json& operator*() {
        return mData;
      }
      explicit operator bool() const {
        return mError != std::nullopt;
      }
      bool operator!() const {
        return mError == std::nullopt;
      }
    };
    
    template<>
    class HttpsResult<void> {
    private:
      std::optional<HttpsError> mError;
      json mData;
    public:
      HttpsResult(const HttpsResponse& r) {
        std::string content_type;
        if(auto it = r->header.find("content-type"); it != r->header.end())
          content_type = it->second;
        const std::string& data = r->content.string();
        const std::string& status_code = r->status_code;
        if(status_code != "204" && content_type == "application/json")
          mError = json::parse(data).get<HttpsError>();
        else if(status_code != "204")
          mError = HttpsError {data, content_type, status_code};
      }
      const std::optional<HttpsError>& error() const {
        return mError;
      }
      explicit operator bool() const {
        return mError != std::nullopt;
      }
      bool operator!() const {
        return mError == std::nullopt;
      }
    };
    
    HttpsResponse Do(const std::string& path, const std::string& method, const HttpsArgs& query,const HttpsArgs& headers) {
      HttpsClient client(_host_, false);
      return client.request(method, path + Args2String(query), "", Args2Headers(headers, {{"Authorization", _auth_}}));
    }

    HttpsResponse Do(const std::string& path, const std::string& method, const HttpsArgs& query, const HttpsArgs& headers, const json& body) {
      HttpsClient client(_host_, false);
      return client.request(method, path + Args2String(query), body.dump(), Args2Headers(headers, {
        {"Authorization", _auth_}, {"content-type", "application/json"}
      }));
    }

    HttpsResponse Do(const std::string& path, const std::string& method, const HttpsArgs& query, const HttpsArgs& headers, const HttpsArgs& formdata, bool) {
      HttpsClient client(_host_, false);
      return client.request(method, path + Args2String(query), Args2String(formdata), Args2Headers(headers, { 
        {"Authorization", _auth_}, {"content-type", "application/x-www-form-urlencoded"} }));
    }
  private:
    static inline SimpleWeb::CaseInsensitiveMultimap Args2Headers(const HttpsArgs& args, SimpleWeb::CaseInsensitiveMultimap&& map = {}) {
      for(const auto& it: args)
        if(it.second)
          map.insert({it.first, *(it.second)});
      return map;
    }
    
    static inline std::string Args2String(const HttpsArgs& args) {
      return SimpleWeb::QueryString::create(Args2Headers(args));
    }
  public:
  /*leagueapiops*/
  };
}
"""
#struct definitions
template_struct = """
  struct {NAME} {{ /*{description}*/ {MEMBERS}
  }};
  static void to_json(json& j, const {NAME}& v) {{ {TO_JSON}
  }}
  static void from_json(const json& j, {NAME}& v) {{ {FROM_JSON}
  }} """
template_struct_members = """
    {TYPE} {NAME};/*{description}*/"""
template_struct_to_json = """
    j[\"{NAME}\"] = v.{NAME};"""
template_struct_from_json = """
    v.{NAME} = j.at(\"{NAME}\").get<{TYPE}>(); """

#enum definitions
template_enum = """
  enum class {NAME} {{ /*{description}*/ {VALUES}
  }};
  static void to_json(json& j, const {NAME}& v) {{
    switch(v) {{ {TO_JSON}
    }};
  }}
  static void from_json(const json& j, {NAME}& v) {{
    auto s = j.get<std::string>(); {FROM_JSON}
  }} """
template_enum_values = """
    {NAME} = {value}, /*{description}*/ """
template_enum_to_json = """
    case {ENUM}::{NAME}:
      j = \"{name}\";
    break;"""
template_enum_from_json = """
    if(s == \"{name}\") {{
      v = {ENUM}::{NAME};
      return;
    }} """

#function tempalte
template_op = """
    /*{description}*/
    HttpsResult<{RETURNS}> {NAME} ({ARGS})
    {{
      return Do("{PATH}?", "{method}", {{ {ARGS_QUERY}
      }}, {{ {ARGS_HEADER}
      }}{BODY});
    }} """
template_op_arg_j = ",\n      "
template_op_arg_r = 'const {TYPE}& {NAME} /*{description}*/'
template_op_arg_o = 'const {TYPE}& {NAME} = std::nullopt /*{description}*/'
template_op_arg = '\n        {{ "{name}", as_string({NAME}) }},'
template_op_form = """, {{ {0}
      }}, true """

#builtin types
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

#converts type or type holder to type :)
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

def generate_definitions(yolo):
    result = ""
    for definition in yolo["definitions"]:
        if definition["isEnum"]:
            result += template_enum.format(**definition,
                VALUES = "".join([template_enum_values.format(**m) for m in definition["values"]]),
                TO_JSON = "".join([template_enum_to_json.format(ENUM = definition["NAME"], **m) for m in definition["values"]]),
                FROM_JSON = "".join([template_enum_from_json.format(ENUM = definition["NAME"], **m) for m in definition["values"]]))
        else:
            result += template_struct.format(**definition,
                MEMBERS = "".join([template_struct_members.format(**m) for m in definition["fields"]]),
                TO_JSON = "".join([template_struct_to_json.format(**m) for m in definition["fields"]]),
                FROM_JSON = "".join([template_struct_from_json.format(**m) for m in definition["fields"]]))
    return result

def generate_ops(yolo):
    result = ""
    for op in yolo["functions"]:
        args_form = [template_op_arg.format(**arg) for arg in op["arguments"] if arg["in"] == "formData"]
        args_body = [',' + arg["NAME"] for arg in op["arguments"] if arg["in"] == "body"]
        result += template_op.format(**op,
            ARGS = template_op_arg_j.join([
                (template_op_arg_o.format(**arg) if arg["optional"] else template_op_arg_r.format(**arg)) for arg in op["arguments"]
            ]),
            ARGS_HEADER = "".join([template_op_arg.format(**arg) for arg in op["arguments"] if arg["in"] == "header"]),
            ARGS_QUERY = "".join([template_op_arg.format(**arg) for arg in op["arguments"] if arg["in"] == "query"]),
            PATH = op["url"].format(**{arg["name"] : '"+as_string({0})+"'.format(arg["NAME"]) for arg in op["arguments"] if arg["in"] == "path" }),
            BODY = (template_op_form.format("".join(args_form)) if len(args_form)>0 else args_body[0] if len(args_body) == 1 else  ''))
    return result

def fix_names(yolo):
    for definition in yolo["definitions"]:
        definition["NAME"] = "{0}".format(definition["name"].replace("-", "_"))
        for field in definition["fields"]:
            field["NAME"] = field["name"].replace("-", "_")
            field["TYPE"] = type2cpp(field)
        for value in definition["values"]:
            value["NAME"] = value["name"].replace("-", "_") + "_e"
    ordered = []
    for function in yolo["functions"]:
        function["NAME"] = function["name"].replace("-", "_")
        function["RETURNS"] = type2cpp(function["returns"])
        for arg in function["arguments"]:
            arg["NAME"] = arg["name"].replace("-", "_")
            arg["TYPE"] = type2cpp(arg)
    for event in yolo["events"]:
        event["NAME"] = event["name"].replace("-", "_")
        event["TYPE"] = type2cpp(event)
        
def fix_order(yolo):
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
def generate_cpp(yolo, folder):
    mkpath(folder)
    fix_names(yolo)
    fix_order(yolo)
    d = generate_definitions(yolo)
    o = generate_ops(yolo)
    g = template.replace("/*leagueapidefinitions*/", d).replace("/*leagueapiops*/", o)
    open("{0}/leagueapi.hpp".format(folder), "w+").write(g)
      
generate_cpp(json_load("yolo.json"), "output/cpp")
