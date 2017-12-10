from swag2yolo import *
#struct definitions
template_struct = """#pragma once
#include <leagueapi/base.hpp>
{INCLUDES}
namespace leagueapi {{
  struct {NAME} {{ /*{description}*/ {MEMBERS}
  }};
  static void to_json(json& j, const {NAME}& v) {{ {TO_JSON}
  }}
  static void from_json(const json& j, {NAME}& v) {{ {FROM_JSON}
  }}
}} """
template_struct_members = """
    {TYPE} {NAME};/*{description}*/"""
template_struct_to_json = """
    j[\"{NAME}\"] = v.{NAME};"""
template_struct_from_json = """
    v.{NAME} = j.at(\"{NAME}\").get<{TYPE}>(); """

#enum definitions
template_enum = """#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {{
  enum class {NAME} {{ /*{description}*/ {VALUES}
  }};
  static void to_json(json& j, const {NAME}& v) {{
    switch(v) {{ {TO_JSON}
    }};
  }}
  static void from_json(const json& j, {NAME}& v) {{
    auto s = j.get<std::string>(); {FROM_JSON}
  }}
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
template_op = """#pragma once
#include <leagueapi/https.hpp>
{INCLUDES}
namespace leagueapi::op {{
  /*{description}*/
  static https::Result<{RETURNS}> {NAME} (const https::Info& _info_{ARGS_R} {ARGS_O})
  {{ 
    return {{ https::Do(_info_, "{method}", "{PATH}?", {{ {ARGS_QUERY}
    }}, {{ {ARGS_HEADER}
    }}{BODY}) }};
  }}
}} """
template_op_arg_r = ',\n      const {TYPE}& {NAME} /*{description}*/'
template_op_arg_o = ',\n      const {TYPE}& {NAME} = std::nullopt /*{description}*/'
template_op_arg = '\n      {{ "{name}", https::to_string({NAME}) }},'
template_op_form = """, {{ {0}
}} """

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

#formats all include types if they are not builtins and empty
def type2include(parent, fmt, additional = ""):
    def _type2include(typ):
        if typ["type"] == "vector" or typ["type"] == "map":
            return "" if typ["elementType"] in builtins else typ["elementType"]
        return "" if typ["type"] in builtins else typ["type"]
    includes = { _type2include(f["type"]) for f in parent } 
    if not additional == "":
        includes.update({_type2include(additional)})
    return "".join([fmt.format(i) for i in includes if not i == ""])
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

def generate_definitions(yolo, folder):
    mkpath("{0}/leagueapi/definitions/".format(folder))
    for definition in yolo["definitions"]:
        with open("{0}/leagueapi/definitions/{1}.hpp".format(folder, definition["name"]), "w+") as file:
            if definition["isEnum"]:
                file.write(template_enum.format(**definition,
                    VALUES = "".join([template_enum_values.format(**m) for m in definition["values"]]),
                    TO_JSON = "".join([template_enum_to_json.format(ENUM = definition["NAME"], **m) for m in definition["values"]]),
                    FROM_JSON = "".join([template_enum_from_json.format(ENUM = definition["NAME"], **m) for m in definition["values"]]),
                ))
            else:
                file.write(template_struct.format(**definition,
                    INCLUDES = type2include(definition["fields"], '#include "<leagueapi/definitions/{0}.hpp>"\n'),
                    MEMBERS = "".join([template_struct_members.format(**m) for m in definition["fields"]]),
                    TO_JSON = "".join([template_struct_to_json.format(**m) for m in definition["fields"]]),
                    FROM_JSON = "".join([template_struct_from_json.format(**m) for m in definition["fields"]]),
                ))            
    with open("{0}/leagueapi/definitions.hpp".format(folder), "w+") as file:
        file.write("#pragma once\n")
        file.write("\n".join(['#include "definitions/{0}.hpp"'.format(defi["name"]) for defi in yolo["definitions"]]))

def generate_ops(yolo, folder):
    mkpath("{0}/leagueapi/ops".format(folder))
    for op in yolo["functions"]:
        with open("{0}/leagueapi/ops/{1}.hpp".format(folder, op["name"]), "w+") as file:
            args_form = [template_op_arg.format(**arg) for arg in op["arguments"] if arg["in"] == "formData"]
            args_body = [',' + arg["NAME"] for arg in op["arguments"] if arg["in"] == "body"]
            file.write(template_op.format(**op,
                INCLUDES = type2include(op["arguments"], '#include <leagueapi/definitions/{0}.hpp>\n', op["returns"]),
                ARGS_R = "".join([template_op_arg_r.format(**arg) for arg in op["arguments"] if not arg["optional"]]),
                ARGS_O = "".join([template_op_arg_o.format(**arg) for arg in op["arguments"] if arg["optional"]]),
                ARGS_HEADER = "".join([template_op_arg.format(**arg) for arg in op["arguments"] if arg["in"] == "header"]),
                ARGS_QUERY = "".join([template_op_arg.format(**arg) for arg in op["arguments"] if arg["in"] == "query"]),
                PATH = op["url"].format(**{arg["name"] : '"+to_string({0})+"'.format(arg["NAME"]) for arg in op["arguments"] if arg["in"] == "path" }),
                BODY = (template_op_form.format("".join(args_form)) if len(args_form)>0 else args_body[0] if len(args_body) == 1 else  ',""')
            ))
    with open("{0}/leagueapi/ops.hpp".format(folder), "w+") as file:
        file.write('#pragma once\n#include <leagueapi/definitions.hpp>\n')
        file.write("\n".join(['#include <leagueapi/ops/{0}.hpp>'.format(op["name"]) for op in yolo["functions"]]))

def generate_cpp(yolo, folder):
    mkpath(folder)
    for definition in yolo["definitions"]:
        definition["NAME"] = "{0}".format(definition["name"].replace("-", "_"))
        for field in definition["fields"]:
            field["NAME"] = field["name"].replace("-", "_")
            field["TYPE"] = type2cpp(field)
        for value in definition["values"]:
            value["NAME"] = value["name"].replace("-", "_") + "_e"
    for function in yolo["functions"]:
        function["NAME"] = function["name"].replace("-", "_")
        function["RETURNS"] = type2cpp(function["returns"])
        for arg in function["arguments"]:
            arg["NAME"] = arg["name"].replace("-", "_")
            arg["TYPE"] = type2cpp(arg)
    for event in yolo["events"]:
        event["NAME"] = event["name"].replace("-", "_")
        event["TYPE"] = type2cpp(event)
    generate_definitions(yolo, folder)
    generate_ops(yolo, folder)

generate_cpp(json_load("yolo.json"), "output")
