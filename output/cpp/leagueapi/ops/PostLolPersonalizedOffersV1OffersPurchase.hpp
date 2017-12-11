#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPersonalizedOffersPurchaseResponse.hpp>
#include <leagueapi/definitions/LolPersonalizedOffersOfferRequests.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPersonalizedOffersPurchaseResponse> PostLolPersonalizedOffersV1OffersPurchase (const https::Info& _info_,
      const LolPersonalizedOffersOfferRequests& offerRequests /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-personalized-offers/v1/offers/purchase?", { 
    }, { 
    },offerRequests) };
  }
} 