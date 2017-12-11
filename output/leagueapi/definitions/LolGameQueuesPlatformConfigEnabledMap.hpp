#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolGameQueuesPlatformConfigEnabledMap { /**/ 
    int32_t minPlayers;/**/
    int32_t gameMapId;/**/
  };
  static void to_json(json& j, const LolGameQueuesPlatformConfigEnabledMap& v) { 
    j["minPlayers"] = v.minPlayers;
    j["gameMapId"] = v.gameMapId;
  }
  static void from_json(const json& j, LolGameQueuesPlatformConfigEnabledMap& v) { 
    v.minPlayers = j.at("minPlayers").get<int32_t>(); 
    v.gameMapId = j.at("gameMapId").get<int32_t>(); 
  }
} 