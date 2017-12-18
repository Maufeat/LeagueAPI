#pragma once
#include "../base_op.hpp" 
#include "../def/LolChatBlockedPlayerResource.hpp"
namespace lol {
  inline Result<json> PostLolChatV1BlockedPlayers(const LeagueClient& _client, const LolChatBlockedPlayerResource& blocked)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-chat/v1/blocked-players?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(blocked).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}