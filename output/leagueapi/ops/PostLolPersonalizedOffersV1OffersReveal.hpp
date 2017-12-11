#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPersonalizedOffersUIOffer.hpp>
#include <leagueapi/definitions/LolPersonalizedOffersOfferIds.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolPersonalizedOffersUIOffer>> PostLolPersonalizedOffersV1OffersReveal (const https::Info& _info_,
      const LolPersonalizedOffersOfferIds& offerIds /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-personalized-offers/v1/offers/reveal?", { 
    }, { 
    },offerIds) };
  }
} 