#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderChampSelectBannableChampions.hpp>
namespace lol {
  inline Result<LolLobbyTeamBuilderChampSelectBannableChampions> GetLolLobbyTeamBuilderChampSelectV1BannableChampions(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyTeamBuilderChampSelectBannableChampions> {
        _client_.request("get", "/lol-lobby-team-builder/champ-select/v1/bannable-champions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderChampSelectBannableChampions> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}