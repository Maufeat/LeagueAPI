#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyCustomJoinParameters.hpp>
namespace lol {
  inline Result<json> PostLolLobbyV1CustomGamesByIdJoin(const LeagueClient& _client, const uint64_t& id, const LolLobbyLobbyCustomJoinParameters& parameters)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-lobby/v1/custom-games/"+to_string(id)+"/join?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(parameters).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}