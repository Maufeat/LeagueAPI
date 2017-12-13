#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatUserResource.hpp>
namespace lol {
  Result<LolChatUserResource> PutLolChatV1Me(const LeagueClient& _client, const LolChatUserResource& me)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-chat/v1/me?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(me).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}