#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderCellV1 { 
    int32_t teamId;
    int32_t cellId;
    std::string summonerName;
    int32_t championPickIntent;
    int32_t championId;
    int32_t skinId;
    std::string assignedPosition;
    int32_t spell1Id;
    int32_t spell2Id;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderCellV1& v) {
    j["teamId"] = v.teamId; 
    j["cellId"] = v.cellId; 
    j["summonerName"] = v.summonerName; 
    j["championPickIntent"] = v.championPickIntent; 
    j["championId"] = v.championId; 
    j["skinId"] = v.skinId; 
    j["assignedPosition"] = v.assignedPosition; 
    j["spell1Id"] = v.spell1Id; 
    j["spell2Id"] = v.spell2Id; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderCellV1& v) {
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.cellId = j.at("cellId").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.championPickIntent = j.at("championPickIntent").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.skinId = j.at("skinId").get<int32_t>(); 
    v.assignedPosition = j.at("assignedPosition").get<std::string>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}