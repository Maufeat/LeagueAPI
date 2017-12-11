#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/FellowPlayerInfo.hpp>"

namespace leagueapi {
  struct PlayerGameStats { /**/ 
    std::vector<FellowPlayerInfo> fellowPlayers;/**/
    uint64_t gameId;/**/
    uint64_t createDate;/**/
    uint64_t userId;/**/
  };
  static void to_json(json& j, const PlayerGameStats& v) { 
    j["fellowPlayers"] = v.fellowPlayers;
    j["gameId"] = v.gameId;
    j["createDate"] = v.createDate;
    j["userId"] = v.userId;
  }
  static void from_json(const json& j, PlayerGameStats& v) { 
    v.fellowPlayers = j.at("fellowPlayers").get<std::vector<FellowPlayerInfo>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.createDate = j.at("createDate").get<uint64_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
  }
} 