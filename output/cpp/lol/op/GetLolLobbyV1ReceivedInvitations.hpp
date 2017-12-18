#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyInvitation.hpp>
namespace lol {
  inline Result<std::vector<LolLobbyLobbyInvitation>> GetLolLobbyV1ReceivedInvitations(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLobbyLobbyInvitation>> {
        _client_.request("get", "/lol-lobby/v1/received-invitations?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLobbyLobbyInvitation>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}