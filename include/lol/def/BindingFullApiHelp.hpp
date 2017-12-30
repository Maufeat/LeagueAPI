#pragma once
#include "../base_def.hpp" 
#include "BindingFullTypeHelp.hpp"
#include "BindingFullFunctionHelp.hpp"
#include "BindingFullEventHelp.hpp"
namespace lol {
  struct BindingFullApiHelp { 
    std::vector<BindingFullTypeHelp> types;
    std::vector<BindingFullFunctionHelp> functions;
    std::vector<BindingFullEventHelp> events; 
  };
  inline void to_json(json& j, const BindingFullApiHelp& v) {
    j["types"] = v.types; 
    j["functions"] = v.functions; 
    j["events"] = v.events; 
  }
  inline void from_json(const json& j, BindingFullApiHelp& v) {
    v.types = j.at("types").get<std::vector<BindingFullTypeHelp>>(); 
    v.functions = j.at("functions").get<std::vector<BindingFullFunctionHelp>>(); 
    v.events = j.at("events").get<std::vector<BindingFullEventHelp>>(); 
  }
}