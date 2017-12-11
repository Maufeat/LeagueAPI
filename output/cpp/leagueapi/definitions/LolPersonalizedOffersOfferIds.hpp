#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPersonalizedOffersOfferId.hpp>

namespace leagueapi {
  struct LolPersonalizedOffersOfferIds { /**/ 
    std::vector<LolPersonalizedOffersOfferId> offers;/**/
  };
  static void to_json(json& j, const LolPersonalizedOffersOfferIds& v) { 
    j["offers"] = v.offers;
  }
  static void from_json(const json& j, LolPersonalizedOffersOfferIds& v) { 
    v.offers = j.at("offers").get<std::vector<LolPersonalizedOffersOfferId>>(); 
  }
} 