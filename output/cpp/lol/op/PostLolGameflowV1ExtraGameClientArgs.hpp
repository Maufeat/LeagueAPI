#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<void> PostLolGameflowV1ExtraGameClientArgs(const LeagueClient& _client, const std::vector<std::string>& extraGameClientArgs)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-gameflow/v1/extra-game-client-args?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(extraGameClientArgs).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}