#pragma once
#include "../base_op.hpp" 
#include "../def/LolLobbyLobbyMember.hpp"
namespace lol {
  inline Result<LolLobbyLobbyMember> GetLolLobbyV1LobbyMembersById(const LeagueClient& _client, const uint64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyLobbyMember> {
        _client_.request("get", "/lol-lobby/v1/lobby/members/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobbyMember> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}