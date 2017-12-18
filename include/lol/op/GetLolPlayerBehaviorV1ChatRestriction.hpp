#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPlayerBehaviorRestrictionNotification.hpp"
namespace lol {
  inline Result<LolPlayerBehaviorRestrictionNotification> GetLolPlayerBehaviorV1ChatRestriction(LeagueClient& _client)
  {
    try {
      return ToResult<LolPlayerBehaviorRestrictionNotification>(_client.https.request("get", "/lol-player-behavior/v1/chat-restriction?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolPlayerBehaviorRestrictionNotification>(e.code());
    }
  }
  inline void GetLolPlayerBehaviorV1ChatRestriction(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolPlayerBehaviorRestrictionNotification>&)> cb)
  {
    _client.httpsa.request("get", "/lol-player-behavior/v1/chat-restriction?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolPlayerBehaviorRestrictionNotification>(e));
            else
              cb(_client, ToResult<LolPlayerBehaviorRestrictionNotification>(response));
        });
  }
}