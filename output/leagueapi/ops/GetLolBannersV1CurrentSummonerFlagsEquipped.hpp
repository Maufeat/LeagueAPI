#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolBannersBannerFlag.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolBannersBannerFlag> GetLolBannersV1CurrentSummonerFlagsEquipped (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-banners/v1/current-summoner/flags/equipped?", { 
    }, { 
    },"") };
  }
} 