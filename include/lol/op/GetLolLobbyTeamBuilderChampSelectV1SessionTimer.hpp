#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderChampSelectTimer.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyTeamBuilderChampSelectTimer> GetLolLobbyTeamBuilderChampSelectV1SessionTimer(T& _client)
  {
    try {
      return ToResult<LolLobbyTeamBuilderChampSelectTimer>(_client.https.request("get", "/lol-lobby-team-builder/champ-select/v1/session/timer?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyTeamBuilderChampSelectTimer>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLobbyTeamBuilderChampSelectV1SessionTimer(T& _client, std::function<void(T&, const Result<LolLobbyTeamBuilderChampSelectTimer>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/champ-select/v1/session/timer?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyTeamBuilderChampSelectTimer>(e));
            else
              cb(_client, ToResult<LolLobbyTeamBuilderChampSelectTimer>(response));
        });
  }
}