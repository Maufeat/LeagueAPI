#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderChampSelectTradeContract.hpp>
namespace lol {
  inline Result<LolLobbyTeamBuilderChampSelectTradeContract> GetLolLobbyTeamBuilderChampSelectV1SessionTradesById(const LeagueClient& _client, const int64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyTeamBuilderChampSelectTradeContract> {
        _client_.request("get", "/lol-lobby-team-builder/champ-select/v1/session/trades/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderChampSelectTradeContract> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}