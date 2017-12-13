#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyCustomJoinParameters.hpp>
namespace lol {
  Result<json> PostLolLobbyV1CustomGamesByIdJoin(const LeagueClient& _client, const uint64_t& id, const LolLobbyLobbyCustomJoinParameters& parameters)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby/v1/custom-games/"+to_string(id)+"/join?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(parameters).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}