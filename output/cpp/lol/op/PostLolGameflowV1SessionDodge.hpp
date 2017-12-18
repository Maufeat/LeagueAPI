#pragma once
#include "../base_op.hpp" 
#include "../def/LolGameflowGameflowGameDodge.hpp"
namespace lol {
  inline Result<void> PostLolGameflowV1SessionDodge(const LeagueClient& _client, const LolGameflowGameflowGameDodge& dodgeData)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-gameflow/v1/session/dodge?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(dodgeData).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}