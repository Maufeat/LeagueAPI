#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderCellV1 { 
    uint64_t summonerId;
    int32_t skinId;
    int32_t championPickIntent;
    std::string assignedPosition;
    int32_t championId;
    std::string summonerName;
    int32_t spell1Id;
    int32_t spell2Id;
    int32_t cellId;
    int32_t teamId; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderCellV1& v) {
    j["summonerId"] = v.summonerId; 
    j["skinId"] = v.skinId; 
    j["championPickIntent"] = v.championPickIntent; 
    j["assignedPosition"] = v.assignedPosition; 
    j["championId"] = v.championId; 
    j["summonerName"] = v.summonerName; 
    j["spell1Id"] = v.spell1Id; 
    j["spell2Id"] = v.spell2Id; 
    j["cellId"] = v.cellId; 
    j["teamId"] = v.teamId; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderCellV1& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.skinId = j.at("skinId").get<int32_t>(); 
    v.championPickIntent = j.at("championPickIntent").get<int32_t>(); 
    v.assignedPosition = j.at("assignedPosition").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
    v.cellId = j.at("cellId").get<int32_t>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
  }
}