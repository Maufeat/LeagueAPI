#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource> GetLolLobbyTeamBuilderV1TbEnabledFeatures(LeagueClient& _client)
  {
    try {
      return ToResult<LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource>(_client.https.request("get", "/lol-lobby-team-builder/v1/tb-enabled-features?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource>(e.code());
    }
  }
  inline void GetLolLobbyTeamBuilderV1TbEnabledFeatures(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/v1/tb-enabled-features?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource>(e));
            else
              cb(_client, ToResult<LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource>(response));
        });
  }
}