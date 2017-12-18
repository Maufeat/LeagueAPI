#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BindingAsyncFailureEvent { 
    std::string error;
    uint32_t asyncToken; 
  };
  inline void to_json(json& j, const BindingAsyncFailureEvent& v) {
    j["error"] = v.error; 
    j["asyncToken"] = v.asyncToken; 
  }
  inline void from_json(const json& j, BindingAsyncFailureEvent& v) {
    v.error = j.at("error").get<std::string>(); 
    v.asyncToken = j.at("asyncToken").get<uint32_t>(); 
  }
}