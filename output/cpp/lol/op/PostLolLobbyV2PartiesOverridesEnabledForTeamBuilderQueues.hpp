#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<void> PostLolLobbyV2PartiesOverridesEnabledForTeamBuilderQueues(LeagueClient& _client, const bool& enabledForTeambuilderQueues)
  {
    try {
      return Result<void> {
        _client.https.request("post", "/lol-lobby/v2/parties/overrides/EnabledForTeamBuilderQueues?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "enabledForTeambuilderQueues", to_string(enabledForTeambuilderQueues) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolLobbyV2PartiesOverridesEnabledForTeamBuilderQueues(LeagueClient& _client, const bool& enabledForTeambuilderQueues, std::function<void(LeagueClient&,const Result<void>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby/v2/parties/overrides/EnabledForTeamBuilderQueues?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "enabledForTeambuilderQueues", to_string(enabledForTeambuilderQueues) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<void> { response });
          else
            cb(_client,Result<void> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}