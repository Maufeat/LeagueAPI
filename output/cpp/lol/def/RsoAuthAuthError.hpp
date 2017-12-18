#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RsoAuthAuthError { 
    std::string errorDescription;
    std::string error; 
  };
  inline void to_json(json& j, const RsoAuthAuthError& v) {
    j["errorDescription"] = v.errorDescription; 
    j["error"] = v.error; 
  }
  inline void from_json(const json& j, RsoAuthAuthError& v) {
    v.errorDescription = j.at("errorDescription").get<std::string>(); 
    v.error = j.at("error").get<std::string>(); 
  }
}