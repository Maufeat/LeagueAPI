#pragma once
#include "../base_op.hpp" 
#include "../def/LolLobbyLobbyParticipantDto.hpp"
namespace lol {
  inline Result<std::vector<LolLobbyLobbyParticipantDto>> GetLolLobbyV2LobbyMembers(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLobbyLobbyParticipantDto>> {
        _client_.request("get", "/lol-lobby/v2/lobby/members?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLobbyLobbyParticipantDto>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}