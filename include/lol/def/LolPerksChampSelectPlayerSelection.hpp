#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksChampSelectPlayerSelection { 
    int64_t cellId;
    std::string displayName;
    int32_t championId;
    int32_t selectedSkinId;
    int64_t wardSkinId;
    uint64_t spell1Id;
    uint64_t spell2Id;
    int32_t team;
    std::string assignedPosition;
    int32_t championPickIntent;
    std::string playerType;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolPerksChampSelectPlayerSelection& v) {
    j["cellId"] = v.cellId; 
    j["displayName"] = v.displayName; 
    j["championId"] = v.championId; 
    j["selectedSkinId"] = v.selectedSkinId; 
    j["wardSkinId"] = v.wardSkinId; 
    j["spell1Id"] = v.spell1Id; 
    j["spell2Id"] = v.spell2Id; 
    j["team"] = v.team; 
    j["assignedPosition"] = v.assignedPosition; 
    j["championPickIntent"] = v.championPickIntent; 
    j["playerType"] = v.playerType; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolPerksChampSelectPlayerSelection& v) {
    v.cellId = j.at("cellId").get<int64_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.selectedSkinId = j.at("selectedSkinId").get<int32_t>(); 
    v.wardSkinId = j.at("wardSkinId").get<int64_t>(); 
    v.spell1Id = j.at("spell1Id").get<uint64_t>(); 
    v.spell2Id = j.at("spell2Id").get<uint64_t>(); 
    v.team = j.at("team").get<int32_t>(); 
    v.assignedPosition = j.at("assignedPosition").get<std::string>(); 
    v.championPickIntent = j.at("championPickIntent").get<int32_t>(); 
    v.playerType = j.at("playerType").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}