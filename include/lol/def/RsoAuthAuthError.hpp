#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RsoAuthAuthError { 
    std::string error;
    std::string errorDescription; 
  };
  inline void to_json(json& j, const RsoAuthAuthError& v) {
    j["error"] = v.error; 
    j["errorDescription"] = v.errorDescription; 
  }
  inline void from_json(const json& j, RsoAuthAuthError& v) {
    v.error = j.at("error").get<std::string>(); 
    v.errorDescription = j.at("errorDescription").get<std::string>(); 
  }
}