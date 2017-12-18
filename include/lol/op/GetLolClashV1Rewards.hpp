#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashPlayerRewards.hpp"
namespace lol {
  inline Result<LolClashPlayerRewards> GetLolClashV1Rewards(LeagueClient& _client)
  {
    try {
      return ToResult<LolClashPlayerRewards>(_client.https.request("get", "/lol-clash/v1/rewards?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolClashPlayerRewards>(e.code());
    }
  }
  inline void GetLolClashV1Rewards(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolClashPlayerRewards>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/rewards?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolClashPlayerRewards>(e));
            else
              cb(_client, ToResult<LolClashPlayerRewards>(response));
        });
  }
}