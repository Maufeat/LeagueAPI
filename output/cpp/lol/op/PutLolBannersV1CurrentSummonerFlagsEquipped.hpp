#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolBannersBannerFlag.hpp>
namespace lol {
  Result<LolBannersBannerFlag> PutLolBannersV1CurrentSummonerFlagsEquipped(const LeagueClient& _client, const LolBannersBannerFlag& flag)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolBannersBannerFlag> {
        _client_.request("put", "/lol-banners/v1/current-summoner/flags/equipped?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(flag).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolBannersBannerFlag> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}