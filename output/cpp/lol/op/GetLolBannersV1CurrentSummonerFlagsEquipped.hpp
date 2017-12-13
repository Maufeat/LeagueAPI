#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolBannersBannerFlag.hpp>
namespace lol {
  Result<LolBannersBannerFlag> GetLolBannersV1CurrentSummonerFlagsEquipped(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-banners/v1/current-summoner/flags/equipped?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}