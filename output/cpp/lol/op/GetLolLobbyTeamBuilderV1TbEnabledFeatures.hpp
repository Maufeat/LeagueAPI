#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource.hpp>
namespace lol {
  Result<LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource> GetLolLobbyTeamBuilderV1TbEnabledFeatures(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-lobby-team-builder/v1/tb-enabled-features?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}