#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyMember.hpp>
namespace lol {
  Result<LolLobbyLobbyMember> GetLolLobbyV1LobbyMembersById(const LeagueClient& _client, const uint64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-lobby/v1/lobby/members/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}