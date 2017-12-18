#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyInvitation.hpp"
namespace lol {
  inline Result<std::vector<LolLobbyLobbyInvitation>> GetLolLobbyV1ReceivedInvitations(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolLobbyLobbyInvitation>> {
        _client.https.request("get", "/lol-lobby/v1/received-invitations?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLobbyLobbyInvitation>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyV1ReceivedInvitations(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolLobbyLobbyInvitation>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/received-invitations?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolLobbyLobbyInvitation>> { response });
          else
            cb(_client,Result<std::vector<LolLobbyLobbyInvitation>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}