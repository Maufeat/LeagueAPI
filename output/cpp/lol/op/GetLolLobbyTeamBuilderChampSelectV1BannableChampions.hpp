#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderChampSelectBannableChampions.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderChampSelectBannableChampions> GetLolLobbyTeamBuilderChampSelectV1BannableChampions(LeagueClient& _client)
  {
    try {
      return Result<LolLobbyTeamBuilderChampSelectBannableChampions> {
        _client.https.request("get", "/lol-lobby-team-builder/champ-select/v1/bannable-champions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderChampSelectBannableChampions> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyTeamBuilderChampSelectV1BannableChampions(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolLobbyTeamBuilderChampSelectBannableChampions>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/champ-select/v1/bannable-champions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyTeamBuilderChampSelectBannableChampions> { response });
          else
            cb(_client,Result<LolLobbyTeamBuilderChampSelectBannableChampions> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}