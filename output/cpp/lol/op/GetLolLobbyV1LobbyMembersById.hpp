#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyMember.hpp"
namespace lol {
  inline Result<LolLobbyLobbyMember> GetLolLobbyV1LobbyMembersById(LeagueClient& _client, const uint64_t& id)
  {
    try {
      return Result<LolLobbyLobbyMember> {
        _client.https.request("get", "/lol-lobby/v1/lobby/members/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobbyMember> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyV1LobbyMembersById(LeagueClient& _client, const uint64_t& id, std::function<void(LeagueClient&,const Result<LolLobbyLobbyMember>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/lobby/members/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyLobbyMember> { response });
          else
            cb(_client,Result<LolLobbyLobbyMember> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}