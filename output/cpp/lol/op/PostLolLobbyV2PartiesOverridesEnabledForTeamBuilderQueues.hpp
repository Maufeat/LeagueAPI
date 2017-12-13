#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolLobbyV2PartiesOverridesEnabledForTeamBuilderQueues(const LeagueClient& _client, const bool& enabledForTeambuilderQueues)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-lobby/v2/parties/overrides/EnabledForTeamBuilderQueues?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "enabledForTeambuilderQueues", to_string(enabledForTeambuilderQueues) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}