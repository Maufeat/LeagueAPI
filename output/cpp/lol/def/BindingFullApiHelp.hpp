#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/BindingFullTypeHelp.hpp>
#include <lol/def/BindingFullFunctionHelp.hpp>
#include <lol/def/BindingFullEventHelp.hpp>
namespace lol {
  struct BindingFullApiHelp { 
    std::vector<BindingFullTypeHelp> types;
    std::vector<BindingFullEventHelp> events;
    std::vector<BindingFullFunctionHelp> functions; 
  };
  void to_json(json& j, const BindingFullApiHelp& v) {
  j["types"] = v.types; 
  j["events"] = v.events; 
  j["functions"] = v.functions; 
  }
  void from_json(const json& j, BindingFullApiHelp& v) {
  v.types = j.at("types").get<std::vector<BindingFullTypeHelp>>(); 
  v.events = j.at("events").get<std::vector<BindingFullEventHelp>>(); 
  v.functions = j.at("functions").get<std::vector<BindingFullFunctionHelp>>(); 
  }
}