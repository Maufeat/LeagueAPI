#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolBannersBannerFlag.hpp"
namespace lol {
  template<typename T>
  inline Result<LolBannersBannerFlag> GetLolBannersV1CurrentSummonerFlagsEquipped(T& _client)
  {
    try {
      return ToResult<LolBannersBannerFlag>(_client.https.request("get", "/lol-banners/v1/current-summoner/flags/equipped?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolBannersBannerFlag>(e.code());
    }
  }
  template<typename T>
  inline void GetLolBannersV1CurrentSummonerFlagsEquipped(T& _client, std::function<void(T&, const Result<LolBannersBannerFlag>&)> cb)
  {
    _client.httpsa.request("get", "/lol-banners/v1/current-summoner/flags/equipped?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolBannersBannerFlag>(e));
            else
              cb(_client, ToResult<LolBannersBannerFlag>(response));
        });
  }
}