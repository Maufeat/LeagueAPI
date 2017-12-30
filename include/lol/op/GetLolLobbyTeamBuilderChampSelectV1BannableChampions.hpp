#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderChampSelectBannableChampions.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyTeamBuilderChampSelectBannableChampions> GetLolLobbyTeamBuilderChampSelectV1BannableChampions(T& _client)
  {
    try {
      return ToResult<LolLobbyTeamBuilderChampSelectBannableChampions>(_client.https.request("get", "/lol-lobby-team-builder/champ-select/v1/bannable-champions?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyTeamBuilderChampSelectBannableChampions>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLobbyTeamBuilderChampSelectV1BannableChampions(T& _client, std::function<void(T&, const Result<LolLobbyTeamBuilderChampSelectBannableChampions>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/champ-select/v1/bannable-champions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyTeamBuilderChampSelectBannableChampions>(e));
            else
              cb(_client, ToResult<LolLobbyTeamBuilderChampSelectBannableChampions>(response));
        });
  }
}