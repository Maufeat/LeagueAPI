#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatBlockedPlayerResource.hpp>
namespace lol {
  Result<std::vector<LolChatBlockedPlayerResource>> GetLolChatV1BlockedPlayers(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-chat/v1/blocked-players?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}