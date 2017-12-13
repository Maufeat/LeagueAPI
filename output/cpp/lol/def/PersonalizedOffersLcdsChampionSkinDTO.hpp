#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PersonalizedOffersLcdsChampionSkinDTO { 
    int32_t skinId;
    bool owned;
    int32_t championId; 
  };
  void to_json(json& j, const PersonalizedOffersLcdsChampionSkinDTO& v) {
    j["skinId"] = v.skinId; 
    j["owned"] = v.owned; 
    j["championId"] = v.championId; 
  }
  void from_json(const json& j, PersonalizedOffersLcdsChampionSkinDTO& v) {
    v.skinId = j.at("skinId").get<int32_t>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}