#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyDto.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyLobbyDto> GetLolLobbyV2Lobby(T& _client)
  {
    try {
      return ToResult<LolLobbyLobbyDto>(_client.https.request("get", "/lol-lobby/v2/lobby?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyLobbyDto>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLobbyV2Lobby(T& _client, std::function<void(T&, const Result<LolLobbyLobbyDto>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v2/lobby?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyLobbyDto>(e));
            else
              cb(_client, ToResult<LolLobbyLobbyDto>(response));
        });
  }
}