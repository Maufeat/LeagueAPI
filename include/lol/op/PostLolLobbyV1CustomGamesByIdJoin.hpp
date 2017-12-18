#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyCustomJoinParameters.hpp"
namespace lol {
  inline Result<json> PostLolLobbyV1CustomGamesByIdJoin(LeagueClient& _client, const uint64_t& id, const LolLobbyLobbyCustomJoinParameters& parameters)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-lobby/v1/custom-games/"+to_string(id)+"/join?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(parameters).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void PostLolLobbyV1CustomGamesByIdJoin(LeagueClient& _client, const uint64_t& id, const LolLobbyLobbyCustomJoinParameters& parameters, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby/v1/custom-games/"+to_string(id)+"/join?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(parameters).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}