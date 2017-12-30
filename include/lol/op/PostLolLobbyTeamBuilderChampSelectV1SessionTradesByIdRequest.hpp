#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderChampSelectTradeContract.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyTeamBuilderChampSelectTradeContract> PostLolLobbyTeamBuilderChampSelectV1SessionTradesByIdRequest(T& _client, const int32_t& id)
  {
    try {
      return ToResult<LolLobbyTeamBuilderChampSelectTradeContract>(_client.https.request("post", "/lol-lobby-team-builder/champ-select/v1/session/trades/"+to_string(id)+"/request?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyTeamBuilderChampSelectTradeContract>(e.code());
    }
  }
  template<typename T>
  inline void PostLolLobbyTeamBuilderChampSelectV1SessionTradesByIdRequest(T& _client, const int32_t& id, std::function<void(T&, const Result<LolLobbyTeamBuilderChampSelectTradeContract>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby-team-builder/champ-select/v1/session/trades/"+to_string(id)+"/request?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyTeamBuilderChampSelectTradeContract>(e));
            else
              cb(_client, ToResult<LolLobbyTeamBuilderChampSelectTradeContract>(response));
        });
  }
}