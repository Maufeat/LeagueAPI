#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<void> PostLolGameflowV1ClientReceivedMessage(const LeagueClient& _client, const std::string& messsage)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-gameflow/v1/client-received-message?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(messsage).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}