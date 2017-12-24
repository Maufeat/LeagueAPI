#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct StoreLcdsChampionSkinDTO { 
    bool stillObtainable;
    bool lastSelected;
    int32_t championId;
    uint64_t endDate;
    int32_t winCountRemaining;
    int32_t skinId;
    bool owned;
    bool freeToPlayReward;
    uint64_t purchaseDate;
    std::vector<std::string> sources; 
  };
  inline void to_json(json& j, const StoreLcdsChampionSkinDTO& v) {
    j["stillObtainable"] = v.stillObtainable; 
    j["lastSelected"] = v.lastSelected; 
    j["championId"] = v.championId; 
    j["endDate"] = v.endDate; 
    j["winCountRemaining"] = v.winCountRemaining; 
    j["skinId"] = v.skinId; 
    j["owned"] = v.owned; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["purchaseDate"] = v.purchaseDate; 
    j["sources"] = v.sources; 
  }
  inline void from_json(const json& j, StoreLcdsChampionSkinDTO& v) {
    v.stillObtainable = j.at("stillObtainable").get<bool>(); 
    v.lastSelected = j.at("lastSelected").get<bool>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.endDate = j.at("endDate").get<uint64_t>(); 
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>(); 
    v.skinId = j.at("skinId").get<int32_t>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
    v.sources = j.at("sources").get<std::vector<std::string>>(); 
  }
}