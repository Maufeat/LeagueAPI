#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPlayerBehaviorBanNotification.hpp"
namespace lol {
  inline Result<LolPlayerBehaviorBanNotification> GetLolPlayerBehaviorV1Ban(LeagueClient& _client)
  {
    try {
      return ToResult<LolPlayerBehaviorBanNotification>(_client.https.request("get", "/lol-player-behavior/v1/ban?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolPlayerBehaviorBanNotification>(e.code());
    }
  }
  inline void GetLolPlayerBehaviorV1Ban(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolPlayerBehaviorBanNotification>&)> cb)
  {
    _client.httpsa.request("get", "/lol-player-behavior/v1/ban?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolPlayerBehaviorBanNotification>(e));
            else
              cb(_client, ToResult<LolPlayerBehaviorBanNotification>(response));
        });
  }
}