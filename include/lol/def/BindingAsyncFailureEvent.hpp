#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BindingAsyncFailureEvent { 
    uint32_t asyncToken;
    std::string error; 
  };
  inline void to_json(json& j, const BindingAsyncFailureEvent& v) {
    j["asyncToken"] = v.asyncToken; 
    j["error"] = v.error; 
  }
  inline void from_json(const json& j, BindingAsyncFailureEvent& v) {
    v.asyncToken = j.at("asyncToken").get<uint32_t>(); 
    v.error = j.at("error").get<std::string>(); 
  }
}