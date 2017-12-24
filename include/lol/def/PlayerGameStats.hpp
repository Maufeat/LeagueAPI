#pragma once
#include "../base_def.hpp" 
#include "FellowPlayerInfo.hpp"
namespace lol {
  struct PlayerGameStats { 
    uint64_t userId;
    std::vector<FellowPlayerInfo> fellowPlayers;
    uint64_t gameId;
    uint64_t createDate; 
  };
  inline void to_json(json& j, const PlayerGameStats& v) {
    j["userId"] = v.userId; 
    j["fellowPlayers"] = v.fellowPlayers; 
    j["gameId"] = v.gameId; 
    j["createDate"] = v.createDate; 
  }
  inline void from_json(const json& j, PlayerGameStats& v) {
    v.userId = j.at("userId").get<uint64_t>(); 
    v.fellowPlayers = j.at("fellowPlayers").get<std::vector<FellowPlayerInfo>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.createDate = j.at("createDate").get<uint64_t>(); 
  }
}