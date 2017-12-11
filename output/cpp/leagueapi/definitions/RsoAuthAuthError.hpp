#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RsoAuthAuthError { /**/ 
    std::string errorDescription;/**/
    std::string error;/**/
  };
  static void to_json(json& j, const RsoAuthAuthError& v) { 
    j["errorDescription"] = v.errorDescription;
    j["error"] = v.error;
  }
  static void from_json(const json& j, RsoAuthAuthError& v) { 
    v.errorDescription = j.at("errorDescription").get<std::string>(); 
    v.error = j.at("error").get<std::string>(); 
  }
} 