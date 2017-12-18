#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyEligibility.hpp"
namespace lol {
  inline Result<std::vector<LolLobbyEligibility>> PostLolLobbyV2LobbyEligibilityPremade(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<LolLobbyEligibility>>(_client.https.request("post", "/lol-lobby/v2/lobby/eligibility/premade?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLobbyEligibility>>(e.code());
    }
  }
  inline void PostLolLobbyV2LobbyEligibilityPremade(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<LolLobbyEligibility>>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby/v2/lobby/eligibility/premade?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLobbyEligibility>>(e));
            else
              cb(_client, ToResult<std::vector<LolLobbyEligibility>>(response));
        });
  }
}