#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPersonalizedOffersUIOffer.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolPersonalizedOffersUIOffer>> GetLolPersonalizedOffersV1Offers (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-personalized-offers/v1/offers?", { 
    }, { 
    }) };
  }
} 