#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::string> PostLolLootV1NewPlayerCheckDoneByNewValue(LeagueClient& _client, const bool& newValue)
  {
    try {
      return ToResult<std::string>(_client.https.request("post", "/lol-loot/v1/new-player-check-done/"+to_string(newValue)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::string>(e.code());
    }
  }
  inline void PostLolLootV1NewPlayerCheckDoneByNewValue(LeagueClient& _client, const bool& newValue, std::function<void(LeagueClient&, const Result<std::string>&)> cb)
  {
    _client.httpsa.request("post", "/lol-loot/v1/new-player-check-done/"+to_string(newValue)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::string>(e));
            else
              cb(_client, ToResult<std::string>(response));
        });
  }
}