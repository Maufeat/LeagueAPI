#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<void> PostLolLobbyV2PartiesOverridesEnabled(const LeagueClient& _client, const bool& enabled)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-lobby/v2/parties/overrides/Enabled?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "enabled", to_string(enabled) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}