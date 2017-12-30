#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyCustomChampSelectStartResponse.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyLobbyCustomChampSelectStartResponse> PostLolLobbyV1LobbyCustomStartChampSelect(T& _client)
  {
    try {
      return ToResult<LolLobbyLobbyCustomChampSelectStartResponse>(_client.https.request("post", "/lol-lobby/v1/lobby/custom/start-champ-select?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyLobbyCustomChampSelectStartResponse>(e.code());
    }
  }
  template<typename T>
  inline void PostLolLobbyV1LobbyCustomStartChampSelect(T& _client, std::function<void(T&, const Result<LolLobbyLobbyCustomChampSelectStartResponse>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby/v1/lobby/custom/start-champ-select?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyLobbyCustomChampSelectStartResponse>(e));
            else
              cb(_client, ToResult<LolLobbyLobbyCustomChampSelectStartResponse>(response));
        });
  }
}