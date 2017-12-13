#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PersonalizedOffersLcdsChampionSkinDTO { 
    int32_t skinId;
    int32_t championId;
    bool owned; 
  };
  void to_json(json& j, const PersonalizedOffersLcdsChampionSkinDTO& v) {
  j["skinId"] = v.skinId; 
  j["championId"] = v.championId; 
  j["owned"] = v.owned; 
  }
  void from_json(const json& j, PersonalizedOffersLcdsChampionSkinDTO& v) {
  v.skinId = j.at("skinId").get<int32_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.owned = j.at("owned").get<bool>(); 
  }
}