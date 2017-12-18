#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerLevelUpEvent.hpp"
namespace lol {
  inline Result<PlayerLevelUpEvent> GetLolPlayerLevelUpV1LevelUp(LeagueClient& _client)
  {
    try {
      return ToResult<PlayerLevelUpEvent>(_client.https.request("get", "/lol-player-level-up/v1/level-up?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PlayerLevelUpEvent>(e.code());
    }
  }
  inline void GetLolPlayerLevelUpV1LevelUp(LeagueClient& _client, std::function<void(LeagueClient&, const Result<PlayerLevelUpEvent>&)> cb)
  {
    _client.httpsa.request("get", "/lol-player-level-up/v1/level-up?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PlayerLevelUpEvent>(e));
            else
              cb(_client, ToResult<PlayerLevelUpEvent>(response));
        });
  }
}