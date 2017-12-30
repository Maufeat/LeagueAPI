#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PersonalizedOffersLcdsChampionSkinDTO { 
    int32_t championId;
    bool owned;
    int32_t skinId; 
  };
  inline void to_json(json& j, const PersonalizedOffersLcdsChampionSkinDTO& v) {
    j["championId"] = v.championId; 
    j["owned"] = v.owned; 
    j["skinId"] = v.skinId; 
  }
  inline void from_json(const json& j, PersonalizedOffersLcdsChampionSkinDTO& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.skinId = j.at("skinId").get<int32_t>(); 
  }
}