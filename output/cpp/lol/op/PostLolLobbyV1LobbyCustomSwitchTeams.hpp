#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<json> PostLolLobbyV1LobbyCustomSwitchTeams(const LeagueClient& _client, const std::optional<std::string>& team = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-lobby/v1/lobby/custom/switch-teams?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "team", to_string(team) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}