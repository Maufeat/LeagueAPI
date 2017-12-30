#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderChampSelectDisabledChampions.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyTeamBuilderChampSelectDisabledChampions> GetLolLobbyTeamBuilderChampSelectV1DisabledChampions(T& _client)
  {
    try {
      return ToResult<LolLobbyTeamBuilderChampSelectDisabledChampions>(_client.https.request("get", "/lol-lobby-team-builder/champ-select/v1/disabled-champions?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyTeamBuilderChampSelectDisabledChampions>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLobbyTeamBuilderChampSelectV1DisabledChampions(T& _client, std::function<void(T&, const Result<LolLobbyTeamBuilderChampSelectDisabledChampions>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/champ-select/v1/disabled-champions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyTeamBuilderChampSelectDisabledChampions>(e));
            else
              cb(_client, ToResult<LolLobbyTeamBuilderChampSelectDisabledChampions>(response));
        });
  }
}