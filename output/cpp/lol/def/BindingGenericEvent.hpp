#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct BindingGenericEvent { 
    json data; 
  };
  void to_json(json& j, const BindingGenericEvent& v) {
  j["data"] = v.data; 
  }
  void from_json(const json& j, BindingGenericEvent& v) {
  v.data = j.at("data").get<json>(); 
  }
}