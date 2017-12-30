#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct CollectionsLcdsChampionSkinDTO { 
    bool lastSelected;
    bool freeToPlayReward;
    int32_t skinId;
    bool owned;
    int32_t winCountRemaining;
    uint64_t purchaseDate;
    bool stillObtainable;
    uint64_t endDate;
    int32_t championId;
    std::vector<std::string> sources; 
  };
  inline void to_json(json& j, const CollectionsLcdsChampionSkinDTO& v) {
    j["lastSelected"] = v.lastSelected; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["skinId"] = v.skinId; 
    j["owned"] = v.owned; 
    j["winCountRemaining"] = v.winCountRemaining; 
    j["purchaseDate"] = v.purchaseDate; 
    j["stillObtainable"] = v.stillObtainable; 
    j["endDate"] = v.endDate; 
    j["championId"] = v.championId; 
    j["sources"] = v.sources; 
  }
  inline void from_json(const json& j, CollectionsLcdsChampionSkinDTO& v) {
    v.lastSelected = j.at("lastSelected").get<bool>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.skinId = j.at("skinId").get<int32_t>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>(); 
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
    v.stillObtainable = j.at("stillObtainable").get<bool>(); 
    v.endDate = j.at("endDate").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.sources = j.at("sources").get<std::vector<std::string>>(); 
  }
}