#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatBlockedPlayerResource.hpp>
namespace lol {
  Result<json> PostLolChatV1BlockedPlayers(const LeagueClient& _client, const LolChatBlockedPlayerResource& blocked)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-chat/v1/blocked-players?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(blocked).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}