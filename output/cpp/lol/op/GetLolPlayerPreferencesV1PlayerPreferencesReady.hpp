#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<bool> GetLolPlayerPreferencesV1PlayerPreferencesReady(LeagueClient& _client)
  {
    try {
      return Result<bool> {
        _client.https.request("get", "/lol-player-preferences/v1/player-preferences-ready?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<bool> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolPlayerPreferencesV1PlayerPreferencesReady(LeagueClient& _client, std::function<void(LeagueClient&,const Result<bool>&)> cb)
  {
    _client.httpsa.request("get", "/lol-player-preferences/v1/player-preferences-ready?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<bool> { response });
          else
            cb(_client,Result<bool> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}