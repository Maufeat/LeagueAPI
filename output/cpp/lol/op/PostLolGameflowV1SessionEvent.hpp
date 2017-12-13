#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolGameflowV1SessionEvent(const LeagueClient& _client, const std::string& session)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-gameflow/v1/session/event?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(session).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}