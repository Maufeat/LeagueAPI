#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolLobbyV1LobbyMembersByIdKick(const LeagueClient& _client, const uint64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby/v1/lobby/members/"+to_string(id)+"/kick?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}