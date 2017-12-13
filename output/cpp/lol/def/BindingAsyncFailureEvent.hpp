#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct BindingAsyncFailureEvent { 
    std::string error;
    uint32_t asyncToken; 
  };
  void to_json(json& j, const BindingAsyncFailureEvent& v) {
  j["error"] = v.error; 
  j["asyncToken"] = v.asyncToken; 
  }
  void from_json(const json& j, BindingAsyncFailureEvent& v) {
  v.error = j.at("error").get<std::string>(); 
  v.asyncToken = j.at("asyncToken").get<uint32_t>(); 
  }
}