#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatAuthResourceRsoAccessToken.hpp>
#include <lol/def/LolChatSessionResource.hpp>
namespace lol {
  Result<LolChatSessionResource> PostLolChatV1SessionRso(const LeagueClient& _client, const LolChatAuthResourceRsoAccessToken& auth)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-chat/v1/session/rso?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(auth).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}