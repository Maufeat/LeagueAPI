#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BindingCallbackEvent { 
    uint32_t id;
    std::vector<json> parameters; 
  };
  inline void to_json(json& j, const BindingCallbackEvent& v) {
    j["id"] = v.id; 
    j["parameters"] = v.parameters; 
  }
  inline void from_json(const json& j, BindingCallbackEvent& v) {
    v.id = j.at("id").get<uint32_t>(); 
    v.parameters = j.at("parameters").get<std::vector<json>>(); 
  }
}