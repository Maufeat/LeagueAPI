#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyPlayerDto.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyPlayerDto> GetLolLobbyV1PartiesPlayer(T& _client)
  {
    try {
      return ToResult<LolLobbyPlayerDto>(_client.https.request("get", "/lol-lobby/v1/parties/player?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyPlayerDto>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLobbyV1PartiesPlayer(T& _client, std::function<void(T&, const Result<LolLobbyPlayerDto>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/parties/player?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyPlayerDto>(e));
            else
              cb(_client, ToResult<LolLobbyPlayerDto>(response));
        });
  }
}