#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderChampSelectTradeContract.hpp"
namespace lol {
  inline Result<std::vector<LolLobbyTeamBuilderChampSelectTradeContract>> GetLolLobbyTeamBuilderChampSelectV1SessionTrades(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<LolLobbyTeamBuilderChampSelectTradeContract>>(_client.https.request("get", "/lol-lobby-team-builder/champ-select/v1/session/trades?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLobbyTeamBuilderChampSelectTradeContract>>(e.code());
    }
  }
  inline void GetLolLobbyTeamBuilderChampSelectV1SessionTrades(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<LolLobbyTeamBuilderChampSelectTradeContract>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/champ-select/v1/session/trades?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLobbyTeamBuilderChampSelectTradeContract>>(e));
            else
              cb(_client, ToResult<std::vector<LolLobbyTeamBuilderChampSelectTradeContract>>(response));
        });
  }
}