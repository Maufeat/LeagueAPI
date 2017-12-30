#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> DeleteLolGameClientChatV1IgnoredSummoners(T& _client, const std::string& summonerName)
  {
    try {
      return ToResult<Nothing>(_client.https.request("delete", "/lol-game-client-chat/v1/ignored-summoners?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "summonerName", to_string(summonerName) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void DeleteLolGameClientChatV1IgnoredSummoners(T& _client, const std::string& summonerName, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("delete", "/lol-game-client-chat/v1/ignored-summoners?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "summonerName", to_string(summonerName) }, })), 
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