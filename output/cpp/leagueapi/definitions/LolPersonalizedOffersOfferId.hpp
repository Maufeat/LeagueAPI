#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPersonalizedOffersOfferId { /**/ 
    std::string offerId;/**/
  };
  static void to_json(json& j, const LolPersonalizedOffersOfferId& v) { 
    j["offerId"] = v.offerId;
  }
  static void from_json(const json& j, LolPersonalizedOffersOfferId& v) { 
    v.offerId = j.at("offerId").get<std::string>(); 
  }
} 