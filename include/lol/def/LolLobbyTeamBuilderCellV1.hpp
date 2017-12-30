#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderCellV1 { 
    int32_t teamId;
    int32_t championPickIntent;
    int32_t skinId;
    std::string summonerName;
    int32_t cellId;
    int32_t spell1Id;
    std::string assignedPosition;
    uint64_t summonerId;
    int32_t championId;
    int32_t spell2Id; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderCellV1& v) {
    j["teamId"] = v.teamId; 
    j["championPickIntent"] = v.championPickIntent; 
    j["skinId"] = v.skinId; 
    j["summonerName"] = v.summonerName; 
    j["cellId"] = v.cellId; 
    j["spell1Id"] = v.spell1Id; 
    j["assignedPosition"] = v.assignedPosition; 
    j["summonerId"] = v.summonerId; 
    j["championId"] = v.championId; 
    j["spell2Id"] = v.spell2Id; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderCellV1& v) {
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.championPickIntent = j.at("championPickIntent").get<int32_t>(); 
    v.skinId = j.at("skinId").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.cellId = j.at("cellId").get<int32_t>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.assignedPosition = j.at("assignedPosition").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
  }
}