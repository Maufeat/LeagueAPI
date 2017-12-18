#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyPlayerDto.hpp"
namespace lol {
  inline Result<LolLobbyPlayerDto> GetLolLobbyV1PartiesPlayer(LeagueClient& _client)
  {
    try {
      return Result<LolLobbyPlayerDto> {
        _client.https.request("get", "/lol-lobby/v1/parties/player?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyPlayerDto> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyV1PartiesPlayer(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolLobbyPlayerDto>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/parties/player?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyPlayerDto> { response });
          else
            cb(_client,Result<LolLobbyPlayerDto> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}