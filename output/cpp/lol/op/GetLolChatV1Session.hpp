#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatSessionResource.hpp>
namespace lol {
  Result<LolChatSessionResource> GetLolChatV1Session(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-chat/v1/session?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}