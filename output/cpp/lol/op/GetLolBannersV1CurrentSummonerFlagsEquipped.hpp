#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolBannersBannerFlag.hpp"
namespace lol {
  inline Result<LolBannersBannerFlag> GetLolBannersV1CurrentSummonerFlagsEquipped(LeagueClient& _client)
  {
    try {
      return Result<LolBannersBannerFlag> {
        _client.https.request("get", "/lol-banners/v1/current-summoner/flags/equipped?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolBannersBannerFlag> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolBannersV1CurrentSummonerFlagsEquipped(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolBannersBannerFlag>&)> cb)
  {
    _client.httpsa.request("get", "/lol-banners/v1/current-summoner/flags/equipped?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolBannersBannerFlag> { response });
          else
            cb(_client,Result<LolBannersBannerFlag> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}