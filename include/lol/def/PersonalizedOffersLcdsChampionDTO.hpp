#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PersonalizedOffersLcdsChampionDTO { 
    bool owned;
    int32_t championId; 
  };
  inline void to_json(json& j, const PersonalizedOffersLcdsChampionDTO& v) {
    j["owned"] = v.owned; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, PersonalizedOffersLcdsChampionDTO& v) {
    v.owned = j.at("owned").get<bool>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}