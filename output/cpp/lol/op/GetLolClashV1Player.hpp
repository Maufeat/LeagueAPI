#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashPlayerData.hpp"
namespace lol {
  inline Result<LolClashPlayerData> GetLolClashV1Player(LeagueClient& _client)
  {
    try {
      return Result<LolClashPlayerData> {
        _client.https.request("get", "/lol-clash/v1/player?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashPlayerData> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClashV1Player(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolClashPlayerData>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/player?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolClashPlayerData> { response });
          else
            cb(_client,Result<LolClashPlayerData> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}