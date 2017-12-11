#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPersonalizedOffersUIOffer.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolPersonalizedOffersUIOffer>> PostLolPersonalizedOffersV1OffersByIdReveal (const https::Info& _info_,
      const std::string& id /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-personalized-offers/v1/offers/"+to_string(id)+"/reveal?", { 
    }, { 
    },"") };
  }
} 