#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<bool> GetLolClashV1PlaymodeRestricted(LeagueClient& _client)
  {
    try {
      return ToResult<bool>(_client.https.request("get", "/lol-clash/v1/playmode-restricted?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<bool>(e.code());
    }
  }
  inline void GetLolClashV1PlaymodeRestricted(LeagueClient& _client, std::function<void(LeagueClient&, const Result<bool>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/playmode-restricted?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<bool>(e));
            else
              cb(_client, ToResult<bool>(response));
        });
  }
}