#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<bool> PutLolLobbyV1AutofillDisplayed(LeagueClient& _client)
  {
    try {
      return ToResult<bool>(_client.https.request("put", "/lol-lobby/v1/autofill-displayed?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<bool>(e.code());
    }
  }
  inline void PutLolLobbyV1AutofillDisplayed(LeagueClient& _client, std::function<void(LeagueClient&, const Result<bool>&)> cb)
  {
    _client.httpsa.request("put", "/lol-lobby/v1/autofill-displayed?" +
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