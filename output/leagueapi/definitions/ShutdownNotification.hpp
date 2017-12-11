#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/ShutdownReason.hpp>"

namespace leagueapi {
  struct ShutdownNotification { /**/ 
    float countdown;/**/
    ShutdownReason reason;/**/
    std::string additionalInfo;/**/
  };
  static void to_json(json& j, const ShutdownNotification& v) { 
    j["countdown"] = v.countdown;
    j["reason"] = v.reason;
    j["additionalInfo"] = v.additionalInfo;
  }
  static void from_json(const json& j, ShutdownNotification& v) { 
    v.countdown = j.at("countdown").get<float>(); 
    v.reason = j.at("reason").get<ShutdownReason>(); 
    v.additionalInfo = j.at("additionalInfo").get<std::string>(); 
  }
} 