#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct BindingAsyncCancelEvent { 
    uint32_t asyncToken; 
  };
  void to_json(json& j, const BindingAsyncCancelEvent& v) {
  j["asyncToken"] = v.asyncToken; 
  }
  void from_json(const json& j, BindingAsyncCancelEvent& v) {
  v.asyncToken = j.at("asyncToken").get<uint32_t>(); 
  }
}