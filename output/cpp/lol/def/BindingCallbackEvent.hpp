#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct BindingCallbackEvent { 
    std::vector<json> parameters;
    uint32_t id; 
  };
  void to_json(json& j, const BindingCallbackEvent& v) {
    j["parameters"] = v.parameters; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, BindingCallbackEvent& v) {
    v.parameters = j.at("parameters").get<std::vector<json>>(); 
    v.id = j.at("id").get<uint32_t>(); 
  }
}