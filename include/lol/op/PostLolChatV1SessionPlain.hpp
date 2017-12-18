#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatAuthResourcePlain.hpp"
#include "../def/LolChatSessionResource.hpp"
namespace lol {
  inline Result<LolChatSessionResource> PostLolChatV1SessionPlain(LeagueClient& _client, const LolChatAuthResourcePlain& auth)
  {
    try {
      return ToResult<LolChatSessionResource>(_client.https.request("post", "/lol-chat/v1/session/plain?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(auth).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChatSessionResource>(e.code());
    }
  }
  inline void PostLolChatV1SessionPlain(LeagueClient& _client, const LolChatAuthResourcePlain& auth, std::function<void(LeagueClient&, const Result<LolChatSessionResource>&)> cb)
  {
    _client.httpsa.request("post", "/lol-chat/v1/session/plain?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(auth).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChatSessionResource>(e));
            else
              cb(_client, ToResult<LolChatSessionResource>(response));
        });
  }
}