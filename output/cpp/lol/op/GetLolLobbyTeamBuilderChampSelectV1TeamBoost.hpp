#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderTeamBoost.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderTeamBoost> GetLolLobbyTeamBuilderChampSelectV1TeamBoost(LeagueClient& _client)
  {
    try {
      return Result<LolLobbyTeamBuilderTeamBoost> {
        _client.https.request("get", "/lol-lobby-team-builder/champ-select/v1/team-boost?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderTeamBoost> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyTeamBuilderChampSelectV1TeamBoost(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolLobbyTeamBuilderTeamBoost>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/champ-select/v1/team-boost?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyTeamBuilderTeamBoost> { response });
          else
            cb(_client,Result<LolLobbyTeamBuilderTeamBoost> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}