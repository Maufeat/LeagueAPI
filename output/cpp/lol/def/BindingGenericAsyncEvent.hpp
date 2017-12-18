#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct BindingGenericAsyncEvent { 
    json data;
    uint32_t asyncToken; 
  };
  inline void to_json(json& j, const BindingGenericAsyncEvent& v) {
    j["data"] = v.data; 
    j["asyncToken"] = v.asyncToken; 
  }
  inline void from_json(const json& j, BindingGenericAsyncEvent& v) {
    v.data = j.at("data").get<json>(); 
    v.asyncToken = j.at("asyncToken").get<uint32_t>(); 
  }
}