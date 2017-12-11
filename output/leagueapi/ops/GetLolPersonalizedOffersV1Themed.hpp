#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<bool> GetLolPersonalizedOffersV1Themed (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-personalized-offers/v1/themed?", { 
    }, { 
    },"") };
  }
} 