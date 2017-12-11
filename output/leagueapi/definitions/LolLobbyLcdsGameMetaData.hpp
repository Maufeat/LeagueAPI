#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyLcdsGameMetaData { /**/ 
    uint64_t gameId;/**/
    int32_t mapId;/**/
  };
  static void to_json(json& j, const LolLobbyLcdsGameMetaData& v) { 
    j["gameId"] = v.gameId;
    j["mapId"] = v.mapId;
  }
  static void from_json(const json& j, LolLobbyLcdsGameMetaData& v) { 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
  }
} 