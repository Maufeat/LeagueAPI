#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatBlockedPlayerResource.hpp"
namespace lol {
  inline Result<LolChatBlockedPlayerResource> GetLolChatV1BlockedPlayersById(LeagueClient& _client, const uint64_t& id)
  {
    try {
      return Result<LolChatBlockedPlayerResource> {
        _client.https.request("get", "/lol-chat/v1/blocked-players/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChatBlockedPlayerResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolChatV1BlockedPlayersById(LeagueClient& _client, const uint64_t& id, std::function<void(LeagueClient&,const Result<LolChatBlockedPlayerResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/blocked-players/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolChatBlockedPlayerResource> { response });
          else
            cb(_client,Result<LolChatBlockedPlayerResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}