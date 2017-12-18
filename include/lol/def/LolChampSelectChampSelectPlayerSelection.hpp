#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectChampSelectPlayerSelection { 
    int32_t selectedSkinId;
    std::string playerType;
    int64_t cellId;
    uint64_t spell1Id;
    int64_t wardSkinId;
    int32_t championPickIntent;
    std::string displayName;
    std::string assignedPosition;
    uint64_t spell2Id;
    int32_t team;
    int32_t championId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolChampSelectChampSelectPlayerSelection& v) {
    j["selectedSkinId"] = v.selectedSkinId; 
    j["playerType"] = v.playerType; 
    j["cellId"] = v.cellId; 
    j["spell1Id"] = v.spell1Id; 
    j["wardSkinId"] = v.wardSkinId; 
    j["championPickIntent"] = v.championPickIntent; 
    j["displayName"] = v.displayName; 
    j["assignedPosition"] = v.assignedPosition; 
    j["spell2Id"] = v.spell2Id; 
    j["team"] = v.team; 
    j["championId"] = v.championId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolChampSelectChampSelectPlayerSelection& v) {
    v.selectedSkinId = j.at("selectedSkinId").get<int32_t>(); 
    v.playerType = j.at("playerType").get<std::string>(); 
    v.cellId = j.at("cellId").get<int64_t>(); 
    v.spell1Id = j.at("spell1Id").get<uint64_t>(); 
    v.wardSkinId = j.at("wardSkinId").get<int64_t>(); 
    v.championPickIntent = j.at("championPickIntent").get<int32_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.assignedPosition = j.at("assignedPosition").get<std::string>(); 
    v.spell2Id = j.at("spell2Id").get<uint64_t>(); 
    v.team = j.at("team").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}