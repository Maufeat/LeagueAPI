#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatSessionResource.hpp>
#include <lol/def/LolChatAuthResourcePlain.hpp>
namespace lol {
  Result<LolChatSessionResource> PostLolChatV1SessionPlain(const LeagueClient& _client, const LolChatAuthResourcePlain& auth)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-chat/v1/session/plain?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(auth).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}