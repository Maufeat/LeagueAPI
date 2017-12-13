#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct StoreLcdsChampionSkinDTO { 
    bool lastSelected;
    int32_t skinId;
    bool freeToPlayReward;
    uint64_t endDate;
    uint64_t purchaseDate;
    bool stillObtainable;
    int32_t winCountRemaining;
    bool owned;
    int32_t championId;
    std::vector<std::string> sources; 
  };
  void to_json(json& j, const StoreLcdsChampionSkinDTO& v) {
    j["lastSelected"] = v.lastSelected; 
    j["skinId"] = v.skinId; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["endDate"] = v.endDate; 
    j["purchaseDate"] = v.purchaseDate; 
    j["stillObtainable"] = v.stillObtainable; 
    j["winCountRemaining"] = v.winCountRemaining; 
    j["owned"] = v.owned; 
    j["championId"] = v.championId; 
    j["sources"] = v.sources; 
  }
  void from_json(const json& j, StoreLcdsChampionSkinDTO& v) {
    v.lastSelected = j.at("lastSelected").get<bool>(); 
    v.skinId = j.at("skinId").get<int32_t>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.endDate = j.at("endDate").get<uint64_t>(); 
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
    v.stillObtainable = j.at("stillObtainable").get<bool>(); 
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.sources = j.at("sources").get<std::vector<std::string>>(); 
  }
}