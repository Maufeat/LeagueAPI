#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolBannersBannerFlag.hpp"
namespace lol {
  inline Result<std::vector<LolBannersBannerFlag>> GetLolBannersV1CurrentSummonerFlags(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolBannersBannerFlag>> {
        _client.https.request("get", "/lol-banners/v1/current-summoner/flags?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolBannersBannerFlag>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolBannersV1CurrentSummonerFlags(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolBannersBannerFlag>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-banners/v1/current-summoner/flags?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolBannersBannerFlag>> { response });
          else
            cb(_client,Result<std::vector<LolBannersBannerFlag>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}