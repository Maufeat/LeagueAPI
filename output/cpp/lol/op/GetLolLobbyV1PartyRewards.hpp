#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyPartyRewards.hpp>
namespace lol {
  Result<LolLobbyLobbyPartyRewards> GetLolLobbyV1PartyRewards(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-lobby/v1/party-rewards?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}