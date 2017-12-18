#pragma once
#include "../base_op.hpp" 
#include "../def/LolLobbyTeamBuilderChampSelectTradeContract.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderChampSelectTradeContract> PostLolLobbyTeamBuilderChampSelectV1SessionTradesByIdRequest(const LeagueClient& _client, const int32_t& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyTeamBuilderChampSelectTradeContract> {
        _client_.request("post", "/lol-lobby-team-builder/champ-select/v1/session/trades/"+to_string(id)+"/request?" +
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