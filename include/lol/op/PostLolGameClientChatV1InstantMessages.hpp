#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> PostLolGameClientChatV1InstantMessages(T& _client, const std::string& summonerName, const std::string& message)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/lol-game-client-chat/v1/instant-messages?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "summonerName", to_string(summonerName) },
          { "message", to_string(message) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostLolGameClientChatV1InstantMessages(T& _client, const std::string& summonerName, const std::string& message, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/lol-game-client-chat/v1/instant-messages?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "summonerName", to_string(summonerName) },
          { "message", to_string(message) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}