#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPlayerBehaviorReformCard.hpp"
namespace lol {
  inline Result<LolPlayerBehaviorReformCard> GetLolPlayerBehaviorV1ReformCard(LeagueClient& _client)
  {
    try {
      return ToResult<LolPlayerBehaviorReformCard>(_client.https.request("get", "/lol-player-behavior/v1/reform-card?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolPlayerBehaviorReformCard>(e.code());
    }
  }
  inline void GetLolPlayerBehaviorV1ReformCard(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolPlayerBehaviorReformCard>&)> cb)
  {
    _client.httpsa.request("get", "/lol-player-behavior/v1/reform-card?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolPlayerBehaviorReformCard>(e));
            else
              cb(_client, ToResult<LolPlayerBehaviorReformCard>(response));
        });
  }
}