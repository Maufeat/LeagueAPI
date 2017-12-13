#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatBlockedPlayerResource.hpp>
namespace lol {
  Result<LolChatBlockedPlayerResource> GetLolChatV1BlockedPlayersById(const LeagueClient& _client, const uint64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-chat/v1/blocked-players/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}