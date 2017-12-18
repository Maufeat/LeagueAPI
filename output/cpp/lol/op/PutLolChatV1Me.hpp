#pragma once
#include "../base_op.hpp" 
#include "../def/LolChatUserResource.hpp"
namespace lol {
  inline Result<LolChatUserResource> PutLolChatV1Me(const LeagueClient& _client, const LolChatUserResource& me)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChatUserResource> {
        _client_.request("put", "/lol-chat/v1/me?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(me).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChatUserResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}