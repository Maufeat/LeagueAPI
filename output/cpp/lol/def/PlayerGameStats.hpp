#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/FellowPlayerInfo.hpp>
namespace lol {
  struct PlayerGameStats { 
    uint64_t createDate;
    uint64_t userId;
    std::vector<FellowPlayerInfo> fellowPlayers;
    uint64_t gameId; 
  };
  inline void to_json(json& j, const PlayerGameStats& v) {
    j["createDate"] = v.createDate; 
    j["userId"] = v.userId; 
    j["fellowPlayers"] = v.fellowPlayers; 
    j["gameId"] = v.gameId; 
  }
  inline void from_json(const json& j, PlayerGameStats& v) {
    v.createDate = j.at("createDate").get<uint64_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.fellowPlayers = j.at("fellowPlayers").get<std::vector<FellowPlayerInfo>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
  }
}