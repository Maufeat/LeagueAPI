#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolAccountVerificationVerifyResponse { /**/ 
    std::string message;/**/
    int32_t status;/**/
    bool success;/**/
  };
  static void to_json(json& j, const LolAccountVerificationVerifyResponse& v) { 
    j["message"] = v.message;
    j["status"] = v.status;
    j["success"] = v.success;
  }
  static void from_json(const json& j, LolAccountVerificationVerifyResponse& v) { 
    v.message = j.at("message").get<std::string>(); 
    v.status = j.at("status").get<int32_t>(); 
    v.success = j.at("success").get<bool>(); 
  }
} 