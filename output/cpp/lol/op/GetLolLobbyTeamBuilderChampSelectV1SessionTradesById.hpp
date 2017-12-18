#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderChampSelectTradeContract.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderChampSelectTradeContract> GetLolLobbyTeamBuilderChampSelectV1SessionTradesById(LeagueClient& _client, const int64_t& id)
  {
    try {
      return Result<LolLobbyTeamBuilderChampSelectTradeContract> {
        _client.https.request("get", "/lol-lobby-team-builder/champ-select/v1/session/trades/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderChampSelectTradeContract> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyTeamBuilderChampSelectV1SessionTradesById(LeagueClient& _client, const int64_t& id, std::function<void(LeagueClient&,const Result<LolLobbyTeamBuilderChampSelectTradeContract>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/champ-select/v1/session/trades/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyTeamBuilderChampSelectTradeContract> { response });
          else
            cb(_client,Result<LolLobbyTeamBuilderChampSelectTradeContract> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}