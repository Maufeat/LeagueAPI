#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/BindingFullTypeHelp.hpp>
#include <leagueapi/definitions/BindingFullFunctionHelp.hpp>
#include <leagueapi/definitions/BindingFullEventHelp.hpp>

namespace leagueapi {
  struct BindingFullApiHelp { /*Describes the exposed native API.*/ 
    std::vector<BindingFullTypeHelp> types;/**/
    std::vector<BindingFullEventHelp> events;/**/
    std::vector<BindingFullFunctionHelp> functions;/**/
  };
  static void to_json(json& j, const BindingFullApiHelp& v) { 
    j["types"] = v.types;
    j["events"] = v.events;
    j["functions"] = v.functions;
  }
  static void from_json(const json& j, BindingFullApiHelp& v) { 
    v.types = j.at("types").get<std::vector<BindingFullTypeHelp>>(); 
    v.events = j.at("events").get<std::vector<BindingFullEventHelp>>(); 
    v.functions = j.at("functions").get<std::vector<BindingFullFunctionHelp>>(); 
  }
} 