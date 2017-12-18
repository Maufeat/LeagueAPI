#pragma once
#include "../base_op.hpp" 
#include "../def/LolChatSessionResource.hpp"
#include "../def/LolChatAuthResourceRsoAccessToken.hpp"
namespace lol {
  inline Result<LolChatSessionResource> PostLolChatV1SessionRso(const LeagueClient& _client, const LolChatAuthResourceRsoAccessToken& auth)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChatSessionResource> {
        _client_.request("post", "/lol-chat/v1/session/rso?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(auth).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChatSessionResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}