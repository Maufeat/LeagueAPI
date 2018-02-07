#pragma once
#include "../base_def.hpp" 
#include "BindingFullFunctionHelp.hpp"
#include "BindingFullEventHelp.hpp"
#include "BindingFullTypeHelp.hpp"
namespace lol {
  struct BindingFullApiHelp { 
    std::vector<BindingFullFunctionHelp> functions;
    std::vector<BindingFullTypeHelp> types;
    std::vector<BindingFullEventHelp> events; 
  };
  inline void to_json(json& j, const BindingFullApiHelp& v) {
    j["functions"] = v.functions; 
    j["types"] = v.types; 
    j["events"] = v.events; 
  }
  inline void from_json(const json& j, BindingFullApiHelp& v) {
    v.functions = j.at("functions").get<std::vector<BindingFullFunctionHelp>>(); 
    v.types = j.at("types").get<std::vector<BindingFullTypeHelp>>(); 
    v.events = j.at("events").get<std::vector<BindingFullEventHelp>>(); 
  }
}