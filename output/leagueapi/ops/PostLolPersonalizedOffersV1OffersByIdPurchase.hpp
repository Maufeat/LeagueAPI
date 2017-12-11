#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPersonalizedOffersPurchaseResponse.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPersonalizedOffersPurchaseResponse> PostLolPersonalizedOffersV1OffersByIdPurchase (const https::Info& _info_,
      const std::string& id /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-personalized-offers/v1/offers/"+to_string(id)+"/purchase?", { 
    }, { 
    },"") };
  }
} 