#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderTeamBoost.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderTeamBoost> GetLolLobbyTeamBuilderChampSelectV1TeamBoost(LeagueClient& _client)
  {
    try {
      return ToResult<LolLobbyTeamBuilderTeamBoost>(_client.https.request("get", "/lol-lobby-team-builder/champ-select/v1/team-boost?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyTeamBuilderTeamBoost>(e.code());
    }
  }
  inline void GetLolLobbyTeamBuilderChampSelectV1TeamBoost(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolLobbyTeamBuilderTeamBoost>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/champ-select/v1/team-boost?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyTeamBuilderTeamBoost>(e));
            else
              cb(_client, ToResult<LolLobbyTeamBuilderTeamBoost>(response));
        });
  }
}