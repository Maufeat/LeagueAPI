#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolAccountVerificationDeviceResponse { /**/ 
    std::string message;/**/
    int32_t status;/**/
    bool success;/**/
  };
  static void to_json(json& j, const LolAccountVerificationDeviceResponse& v) { 
    j["message"] = v.message;
    j["status"] = v.status;
    j["success"] = v.success;
  }
  static void from_json(const json& j, LolAccountVerificationDeviceResponse& v) { 
    v.message = j.at("message").get<std::string>(); 
    v.status = j.at("status").get<int32_t>(); 
    v.success = j.at("success").get<bool>(); 
  }
} 