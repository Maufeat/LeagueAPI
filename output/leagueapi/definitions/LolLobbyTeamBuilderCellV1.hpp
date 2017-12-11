#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderCellV1 { /**/ 
    int32_t spell2Id;/**/
    int32_t skinId;/**/
    uint64_t summonerId;/**/
    int32_t championPickIntent;/**/
    std::string assignedPosition;/**/
    int32_t teamId;/**/
    std::string summonerName;/**/
    int32_t cellId;/**/
    int32_t spell1Id;/**/
    int32_t championId;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderCellV1& v) { 
    j["spell2Id"] = v.spell2Id;
    j["skinId"] = v.skinId;
    j["summonerId"] = v.summonerId;
    j["championPickIntent"] = v.championPickIntent;
    j["assignedPosition"] = v.assignedPosition;
    j["teamId"] = v.teamId;
    j["summonerName"] = v.summonerName;
    j["cellId"] = v.cellId;
    j["spell1Id"] = v.spell1Id;
    j["championId"] = v.championId;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderCellV1& v) { 
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
    v.skinId = j.at("skinId").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.championPickIntent = j.at("championPickIntent").get<int32_t>(); 
    v.assignedPosition = j.at("assignedPosition").get<std::string>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.cellId = j.at("cellId").get<int32_t>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
} 