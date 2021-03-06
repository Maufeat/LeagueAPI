#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderChampSelectPickableSkins.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyTeamBuilderChampSelectPickableSkins> GetLolLobbyTeamBuilderChampSelectV1PickableSkins(T& _client)
  {
    try {
      return ToResult<LolLobbyTeamBuilderChampSelectPickableSkins>(_client.https.request("get", "/lol-lobby-team-builder/champ-select/v1/pickable-skins?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyTeamBuilderChampSelectPickableSkins>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLobbyTeamBuilderChampSelectV1PickableSkins(T& _client, std::function<void(T&, const Result<LolLobbyTeamBuilderChampSelectPickableSkins>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/champ-select/v1/pickable-skins?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyTeamBuilderChampSelectPickableSkins>(e));
            else
              cb(_client, ToResult<LolLobbyTeamBuilderChampSelectPickableSkins>(response));
        });
  }
}