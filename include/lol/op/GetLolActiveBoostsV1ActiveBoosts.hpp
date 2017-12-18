#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/ActiveBoosts.hpp"
namespace lol {
  inline Result<ActiveBoosts> GetLolActiveBoostsV1ActiveBoosts(LeagueClient& _client)
  {
    try {
      return ToResult<ActiveBoosts>(_client.https.request("get", "/lol-active-boosts/v1/active-boosts?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<ActiveBoosts>(e.code());
    }
  }
  inline void GetLolActiveBoostsV1ActiveBoosts(LeagueClient& _client, std::function<void(LeagueClient&, const Result<ActiveBoosts>&)> cb)
  {
    _client.httpsa.request("get", "/lol-active-boosts/v1/active-boosts?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<ActiveBoosts>(e));
            else
              cb(_client, ToResult<ActiveBoosts>(response));
        });
  }
}