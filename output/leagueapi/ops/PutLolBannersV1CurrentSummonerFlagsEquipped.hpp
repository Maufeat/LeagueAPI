#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolBannersBannerFlag.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolBannersBannerFlag> PutLolBannersV1CurrentSummonerFlagsEquipped (const https::Info& _info_,
      const LolBannersBannerFlag& flag /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-banners/v1/current-summoner/flags/equipped?", { 
    }, { 
    },flag) };
  }
} 