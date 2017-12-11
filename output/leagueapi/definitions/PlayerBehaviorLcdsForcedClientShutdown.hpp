#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PlayerBehaviorLcdsForcedClientShutdown { /**/ 
    std::string additionalInfo;/**/
    std::string reason;/**/
  };
  static void to_json(json& j, const PlayerBehaviorLcdsForcedClientShutdown& v) { 
    j["additionalInfo"] = v.additionalInfo;
    j["reason"] = v.reason;
  }
  static void from_json(const json& j, PlayerBehaviorLcdsForcedClientShutdown& v) { 
    v.additionalInfo = j.at("additionalInfo").get<std::string>(); 
    v.reason = j.at("reason").get<std::string>(); 
  }
} 