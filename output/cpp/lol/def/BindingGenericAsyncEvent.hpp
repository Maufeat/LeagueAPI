#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct BindingGenericAsyncEvent { 
    uint32_t asyncToken;
    json data; 
  };
  void to_json(json& j, const BindingGenericAsyncEvent& v) {
  j["asyncToken"] = v.asyncToken; 
  j["data"] = v.data; 
  }
  void from_json(const json& j, BindingGenericAsyncEvent& v) {
  v.asyncToken = j.at("asyncToken").get<uint32_t>(); 
  v.data = j.at("data").get<json>(); 
  }
}