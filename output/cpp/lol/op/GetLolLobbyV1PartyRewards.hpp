#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyPartyRewards.hpp"
namespace lol {
  inline Result<LolLobbyLobbyPartyRewards> GetLolLobbyV1PartyRewards(LeagueClient& _client)
  {
    try {
      return Result<LolLobbyLobbyPartyRewards> {
        _client.https.request("get", "/lol-lobby/v1/party-rewards?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobbyPartyRewards> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyV1PartyRewards(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolLobbyLobbyPartyRewards>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/party-rewards?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyLobbyPartyRewards> { response });
          else
            cb(_client,Result<LolLobbyLobbyPartyRewards> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}