#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameflowQueue.hpp>
namespace lol {
  inline Result<void> PostLolGameflowV1SessionGameConfiguration(const LeagueClient& _client, const LolGameflowQueue& queue)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-gameflow/v1/session/game-configuration?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(queue).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}