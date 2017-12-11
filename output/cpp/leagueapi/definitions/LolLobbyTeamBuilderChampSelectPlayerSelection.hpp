#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectPlayerSelection { /**/ 
    std::string assignedPosition;/**/
    std::string playerType;/**/
    int32_t championPickIntent;/**/
    uint64_t spell1Id;/**/
    int32_t championId;/**/
    int64_t wardSkinId;/**/
    int32_t team;/**/
    uint64_t summonerId;/**/
    int32_t selectedSkinId;/**/
    uint64_t spell2Id;/**/
    int64_t cellId;/**/
    std::string displayName;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderChampSelectPlayerSelection& v) { 
    j["assignedPosition"] = v.assignedPosition;
    j["playerType"] = v.playerType;
    j["championPickIntent"] = v.championPickIntent;
    j["spell1Id"] = v.spell1Id;
    j["championId"] = v.championId;
    j["wardSkinId"] = v.wardSkinId;
    j["team"] = v.team;
    j["summonerId"] = v.summonerId;
    j["selectedSkinId"] = v.selectedSkinId;
    j["spell2Id"] = v.spell2Id;
    j["cellId"] = v.cellId;
    j["displayName"] = v.displayName;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderChampSelectPlayerSelection& v) { 
    v.assignedPosition = j.at("assignedPosition").get<std::string>(); 
    v.playerType = j.at("playerType").get<std::string>(); 
    v.championPickIntent = j.at("championPickIntent").get<int32_t>(); 
    v.spell1Id = j.at("spell1Id").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.wardSkinId = j.at("wardSkinId").get<int64_t>(); 
    v.team = j.at("team").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.selectedSkinId = j.at("selectedSkinId").get<int32_t>(); 
    v.spell2Id = j.at("spell2Id").get<uint64_t>(); 
    v.cellId = j.at("cellId").get<int64_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
  }
} 