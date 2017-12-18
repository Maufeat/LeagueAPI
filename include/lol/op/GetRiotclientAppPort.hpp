#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<uint16_t> GetRiotclientAppPort(LeagueClient& _client)
  {
    try {
      return ToResult<uint16_t>(_client.https.request("get", "/riotclient/app-port?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<uint16_t>(e.code());
    }
  }
  inline void GetRiotclientAppPort(LeagueClient& _client, std::function<void(LeagueClient&, const Result<uint16_t>&)> cb)
  {
    _client.httpsa.request("get", "/riotclient/app-port?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<uint16_t>(e));
            else
              cb(_client, ToResult<uint16_t>(response));
        });
  }
}