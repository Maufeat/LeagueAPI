#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolBannersBannerFlag.hpp"
namespace lol {
  template<typename T>
  inline Result<LolBannersBannerFlag> PutLolBannersV1CurrentSummonerFlagsEquipped(T& _client, const LolBannersBannerFlag& flag)
  {
    try {
      return ToResult<LolBannersBannerFlag>(_client.https.request("put", "/lol-banners/v1/current-summoner/flags/equipped?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(flag).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolBannersBannerFlag>(e.code());
    }
  }
  template<typename T>
  inline void PutLolBannersV1CurrentSummonerFlagsEquipped(T& _client, const LolBannersBannerFlag& flag, std::function<void(T&, const Result<LolBannersBannerFlag>&)> cb)
  {
    _client.httpsa.request("put", "/lol-banners/v1/current-summoner/flags/equipped?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(flag).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolBannersBannerFlag>(e));
            else
              cb(_client, ToResult<LolBannersBannerFlag>(response));
        });
  }
}