#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct CollectionsLcdsChampionSkinDTO { 
    int32_t winCountRemaining;
    uint64_t endDate;
    int32_t skinId;
    bool lastSelected;
    bool stillObtainable;
    bool owned;
    bool freeToPlayReward;
    std::vector<std::string> sources;
    int32_t championId;
    uint64_t purchaseDate; 
  };
  void to_json(json& j, const CollectionsLcdsChampionSkinDTO& v) {
  j["winCountRemaining"] = v.winCountRemaining; 
  j["endDate"] = v.endDate; 
  j["skinId"] = v.skinId; 
  j["lastSelected"] = v.lastSelected; 
  j["stillObtainable"] = v.stillObtainable; 
  j["owned"] = v.owned; 
  j["freeToPlayReward"] = v.freeToPlayReward; 
  j["sources"] = v.sources; 
  j["championId"] = v.championId; 
  j["purchaseDate"] = v.purchaseDate; 
  }
  void from_json(const json& j, CollectionsLcdsChampionSkinDTO& v) {
  v.winCountRemaining = j.at("winCountRemaining").get<int32_t>(); 
  v.endDate = j.at("endDate").get<uint64_t>(); 
  v.skinId = j.at("skinId").get<int32_t>(); 
  v.lastSelected = j.at("lastSelected").get<bool>(); 
  v.stillObtainable = j.at("stillObtainable").get<bool>(); 
  v.owned = j.at("owned").get<bool>(); 
  v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  v.sources = j.at("sources").get<std::vector<std::string>>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
  }
}