#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> PostLolLobbyV1LobbyCustomSwitchTeams(LeagueClient& _client, const std::optional<std::string>& team = std::nullopt)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-lobby/v1/lobby/custom/switch-teams?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "team", to_string(team) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void PostLolLobbyV1LobbyCustomSwitchTeams(LeagueClient& _client, const std::optional<std::string>& team = std::nullopt, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby/v1/lobby/custom/switch-teams?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "team", to_string(team) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}