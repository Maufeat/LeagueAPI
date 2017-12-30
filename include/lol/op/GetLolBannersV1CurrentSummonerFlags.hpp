#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolBannersBannerFlag.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolBannersBannerFlag>> GetLolBannersV1CurrentSummonerFlags(T& _client)
  {
    try {
      return ToResult<std::vector<LolBannersBannerFlag>>(_client.https.request("get", "/lol-banners/v1/current-summoner/flags?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolBannersBannerFlag>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolBannersV1CurrentSummonerFlags(T& _client, std::function<void(T&, const Result<std::vector<LolBannersBannerFlag>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-banners/v1/current-summoner/flags?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolBannersBannerFlag>>(e));
            else
              cb(_client, ToResult<std::vector<LolBannersBannerFlag>>(response));
        });
  }
}