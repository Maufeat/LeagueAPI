#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource> GetLolLobbyTeamBuilderV1TbEnabledFeatures(LeagueClient& _client)
  {
    try {
      return Result<LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource> {
        _client.https.request("get", "/lol-lobby-team-builder/v1/tb-enabled-features?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyTeamBuilderV1TbEnabledFeatures(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/v1/tb-enabled-features?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource> { response });
          else
            cb(_client,Result<LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}