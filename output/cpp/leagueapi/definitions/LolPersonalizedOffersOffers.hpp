#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPersonalizedOffersOffer.hpp>

namespace leagueapi {
  struct LolPersonalizedOffersOffers { /**/ 
    std::vector<LolPersonalizedOffersOffer> offers;/**/
  };
  static void to_json(json& j, const LolPersonalizedOffersOffers& v) { 
    j["offers"] = v.offers;
  }
  static void from_json(const json& j, LolPersonalizedOffersOffers& v) { 
    v.offers = j.at("offers").get<std::vector<LolPersonalizedOffersOffer>>(); 
  }
} 