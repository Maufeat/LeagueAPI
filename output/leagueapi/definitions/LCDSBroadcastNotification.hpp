#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LCDSBroadcastNotification { /**/ 
    std::vector<json> broadcastMessages;/**/
  };
  static void to_json(json& j, const LCDSBroadcastNotification& v) { 
    j["broadcastMessages"] = v.broadcastMessages;
  }
  static void from_json(const json& j, LCDSBroadcastNotification& v) { 
    v.broadcastMessages = j.at("broadcastMessages").get<std::vector<json>>(); 
  }
} 