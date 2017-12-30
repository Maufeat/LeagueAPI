#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksChampSelectPlayerSelection { 
    std::string assignedPosition;
    uint64_t spell2Id;
    int32_t championPickIntent;
    int32_t selectedSkinId;
    int64_t cellId;
    uint64_t spell1Id;
    std::string playerType;
    std::string displayName;
    int64_t wardSkinId;
    int32_t team;
    uint64_t summonerId;
    int32_t championId; 
  };
  inline void to_json(json& j, const LolPerksChampSelectPlayerSelection& v) {
    j["assignedPosition"] = v.assignedPosition; 
    j["spell2Id"] = v.spell2Id; 
    j["championPickIntent"] = v.championPickIntent; 
    j["selectedSkinId"] = v.selectedSkinId; 
    j["cellId"] = v.cellId; 
    j["spell1Id"] = v.spell1Id; 
    j["playerType"] = v.playerType; 
    j["displayName"] = v.displayName; 
    j["wardSkinId"] = v.wardSkinId; 
    j["team"] = v.team; 
    j["summonerId"] = v.summonerId; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, LolPerksChampSelectPlayerSelection& v) {
    v.assignedPosition = j.at("assignedPosition").get<std::string>(); 
    v.spell2Id = j.at("spell2Id").get<uint64_t>(); 
    v.championPickIntent = j.at("championPickIntent").get<int32_t>(); 
    v.selectedSkinId = j.at("selectedSkinId").get<int32_t>(); 
    v.cellId = j.at("cellId").get<int64_t>(); 
    v.spell1Id = j.at("spell1Id").get<uint64_t>(); 
    v.playerType = j.at("playerType").get<std::string>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.wardSkinId = j.at("wardSkinId").get<int64_t>(); 
    v.team = j.at("team").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}