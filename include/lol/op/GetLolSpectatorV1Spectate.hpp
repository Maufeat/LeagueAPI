#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/SpectateGameInfo.hpp"
namespace lol {
  inline Result<SpectateGameInfo> GetLolSpectatorV1Spectate(LeagueClient& _client)
  {
    try {
      return ToResult<SpectateGameInfo>(_client.https.request("get", "/lol-spectator/v1/spectate?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<SpectateGameInfo>(e.code());
    }
  }
  inline void GetLolSpectatorV1Spectate(LeagueClient& _client, std::function<void(LeagueClient&, const Result<SpectateGameInfo>&)> cb)
  {
    _client.httpsa.request("get", "/lol-spectator/v1/spectate?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<SpectateGameInfo>(e));
            else
              cb(_client, ToResult<SpectateGameInfo>(response));
        });
  }
}