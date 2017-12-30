#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PersonalizedOffersLcdsChampionDTO { 
    int32_t championId;
    bool owned; 
  };
  inline void to_json(json& j, const PersonalizedOffersLcdsChampionDTO& v) {
    j["championId"] = v.championId; 
    j["owned"] = v.owned; 
  }
  inline void from_json(const json& j, PersonalizedOffersLcdsChampionDTO& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    v.owned = j.at("owned").get<bool>(); 
  }
}