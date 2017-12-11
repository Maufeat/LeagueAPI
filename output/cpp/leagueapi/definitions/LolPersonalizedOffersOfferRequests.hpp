#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPersonalizedOffersOfferRequest.hpp>

namespace leagueapi {
  struct LolPersonalizedOffersOfferRequests { /**/ 
    std::vector<LolPersonalizedOffersOfferRequest> offers;/**/
  };
  static void to_json(json& j, const LolPersonalizedOffersOfferRequests& v) { 
    j["offers"] = v.offers;
  }
  static void from_json(const json& j, LolPersonalizedOffersOfferRequests& v) { 
    v.offers = j.at("offers").get<std::vector<LolPersonalizedOffersOfferRequest>>(); 
  }
} 