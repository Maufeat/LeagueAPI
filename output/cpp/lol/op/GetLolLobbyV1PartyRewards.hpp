#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyPartyRewards.hpp>
namespace lol {
  Result<LolLobbyLobbyPartyRewards> GetLolLobbyV1PartyRewards(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyLobbyPartyRewards> {
        _client_.request("get", "/lol-lobby/v1/party-rewards?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobbyPartyRewards> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}