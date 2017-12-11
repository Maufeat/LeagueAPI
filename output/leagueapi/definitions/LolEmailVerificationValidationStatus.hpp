#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolEmailVerificationValidationStatus { /**/ 
    std::string emailStatus;/**/
  };
  static void to_json(json& j, const LolEmailVerificationValidationStatus& v) { 
    j["emailStatus"] = v.emailStatus;
  }
  static void from_json(const json& j, LolEmailVerificationValidationStatus& v) { 
    v.emailStatus = j.at("emailStatus").get<std::string>(); 
  }
} 