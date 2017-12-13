#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderLobbyPositionPreferencesV2.hpp>
namespace lol {
  Result<json> PostLolLobbyTeamBuilderV2PositionPreferences(const LeagueClient& _client, const LolLobbyTeamBuilderLobbyPositionPreferencesV2& positionPreferences)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-lobby-team-builder/v2/position-preferences?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(positionPreferences).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}