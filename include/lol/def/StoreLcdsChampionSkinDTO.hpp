#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct StoreLcdsChampionSkinDTO { 
    uint64_t endDate;
    uint64_t purchaseDate;
    int32_t winCountRemaining;
    std::vector<std::string> sources;
    int32_t championId;
    bool freeToPlayReward;
    bool lastSelected;
    bool owned;
    int32_t skinId;
    bool stillObtainable; 
  };
  inline void to_json(json& j, const StoreLcdsChampionSkinDTO& v) {
    j["endDate"] = v.endDate; 
    j["purchaseDate"] = v.purchaseDate; 
    j["winCountRemaining"] = v.winCountRemaining; 
    j["sources"] = v.sources; 
    j["championId"] = v.championId; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["lastSelected"] = v.lastSelected; 
    j["owned"] = v.owned; 
    j["skinId"] = v.skinId; 
    j["stillObtainable"] = v.stillObtainable; 
  }
  inline void from_json(const json& j, StoreLcdsChampionSkinDTO& v) {
    v.endDate = j.at("endDate").get<uint64_t>(); 
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>(); 
    v.sources = j.at("sources").get<std::vector<std::string>>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.lastSelected = j.at("lastSelected").get<bool>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.skinId = j.at("skinId").get<int32_t>(); 
    v.stillObtainable = j.at("stillObtainable").get<bool>(); 
  }
}