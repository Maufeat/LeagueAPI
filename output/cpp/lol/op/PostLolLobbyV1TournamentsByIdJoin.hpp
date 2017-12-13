#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolLobbyV1TournamentsByIdJoin(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby/v1/tournaments/"+to_string(id)+"/join?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}