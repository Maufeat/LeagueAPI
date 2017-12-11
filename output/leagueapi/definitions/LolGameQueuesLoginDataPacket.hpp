#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolGameQueuesQueueGameTypeConfig.hpp>"

namespace leagueapi {
  struct LolGameQueuesLoginDataPacket { /**/ 
    std::vector<LolGameQueuesQueueGameTypeConfig> gameTypeConfigs;/**/
  };
  static void to_json(json& j, const LolGameQueuesLoginDataPacket& v) { 
    j["gameTypeConfigs"] = v.gameTypeConfigs;
  }
  static void from_json(const json& j, LolGameQueuesLoginDataPacket& v) { 
    v.gameTypeConfigs = j.at("gameTypeConfigs").get<std::vector<LolGameQueuesQueueGameTypeConfig>>(); 
  }
} 