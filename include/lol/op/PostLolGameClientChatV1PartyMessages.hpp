#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> PostLolGameClientChatV1PartyMessages(LeagueClient& _client, const std::string& message)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/lol-game-client-chat/v1/party-messages?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "message", to_string(message) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostLolGameClientChatV1PartyMessages(LeagueClient& _client, const std::string& message, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/lol-game-client-chat/v1/party-messages?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "message", to_string(message) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}