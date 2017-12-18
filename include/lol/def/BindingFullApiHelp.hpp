#pragma once
#include "../base_def.hpp" 
#include "BindingFullEventHelp.hpp"
#include "BindingFullFunctionHelp.hpp"
#include "BindingFullTypeHelp.hpp"
namespace lol {
  struct BindingFullApiHelp { 
    std::vector<BindingFullEventHelp> events;
    std::vector<BindingFullTypeHelp> types;
    std::vector<BindingFullFunctionHelp> functions; 
  };
  inline void to_json(json& j, const BindingFullApiHelp& v) {
    j["events"] = v.events; 
    j["types"] = v.types; 
    j["functions"] = v.functions; 
  }
  inline void from_json(const json& j, BindingFullApiHelp& v) {
    v.events = j.at("events").get<std::vector<BindingFullEventHelp>>(); 
    v.types = j.at("types").get<std::vector<BindingFullTypeHelp>>(); 
    v.functions = j.at("functions").get<std::vector<BindingFullFunctionHelp>>(); 
  }
}