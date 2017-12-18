#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyInvitation.hpp"
namespace lol {
  inline Result<LolLobbyLobbyInvitation> GetLolLobbyV1ReceivedInvitationsById(LeagueClient& _client, const std::string& id)
  {
    try {
      return Result<LolLobbyLobbyInvitation> {
        _client.https.request("get", "/lol-lobby/v1/received-invitations/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobbyInvitation> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyV1ReceivedInvitationsById(LeagueClient& _client, const std::string& id, std::function<void(LeagueClient&,const Result<LolLobbyLobbyInvitation>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/received-invitations/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyLobbyInvitation> { response });
          else
            cb(_client,Result<LolLobbyLobbyInvitation> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}