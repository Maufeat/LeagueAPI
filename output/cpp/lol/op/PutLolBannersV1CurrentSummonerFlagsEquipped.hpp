#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolBannersBannerFlag.hpp"
namespace lol {
  inline Result<LolBannersBannerFlag> PutLolBannersV1CurrentSummonerFlagsEquipped(LeagueClient& _client, const LolBannersBannerFlag& flag)
  {
    try {
      return Result<LolBannersBannerFlag> {
        _client.https.request("put", "/lol-banners/v1/current-summoner/flags/equipped?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(flag).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolBannersBannerFlag> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PutLolBannersV1CurrentSummonerFlagsEquipped(LeagueClient& _client, const LolBannersBannerFlag& flag, std::function<void(LeagueClient&,const Result<LolBannersBannerFlag>&)> cb)
  {
    _client.httpsa.request("put", "/lol-banners/v1/current-summoner/flags/equipped?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(flag).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolBannersBannerFlag> { response });
          else
            cb(_client,Result<LolBannersBannerFlag> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}