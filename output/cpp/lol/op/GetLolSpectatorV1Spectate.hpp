#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/SpectateGameInfo.hpp"
namespace lol {
  inline Result<SpectateGameInfo> GetLolSpectatorV1Spectate(LeagueClient& _client)
  {
    try {
      return Result<SpectateGameInfo> {
        _client.https.request("get", "/lol-spectator/v1/spectate?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<SpectateGameInfo> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolSpectatorV1Spectate(LeagueClient& _client, std::function<void(LeagueClient&,const Result<SpectateGameInfo>&)> cb)
  {
    _client.httpsa.request("get", "/lol-spectator/v1/spectate?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<SpectateGameInfo> { response });
          else
            cb(_client,Result<SpectateGameInfo> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}