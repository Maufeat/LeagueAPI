#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolGameClientChatV1PartyMessages(const LeagueClient& _client, const std::string& message)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-game-client-chat/v1/party-messages?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "message", to_string(message) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}