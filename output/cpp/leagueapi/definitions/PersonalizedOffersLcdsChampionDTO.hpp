#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PersonalizedOffersLcdsChampionDTO { /**/ 
    int32_t championId;/**/
    bool owned;/**/
  };
  static void to_json(json& j, const PersonalizedOffersLcdsChampionDTO& v) { 
    j["championId"] = v.championId;
    j["owned"] = v.owned;
  }
  static void from_json(const json& j, PersonalizedOffersLcdsChampionDTO& v) { 
    v.championId = j.at("championId").get<int32_t>(); 
    v.owned = j.at("owned").get<bool>(); 
  }
} 