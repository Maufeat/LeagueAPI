#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyParticipantDto.hpp"
namespace lol {
  inline Result<std::vector<LolLobbyLobbyParticipantDto>> GetLolLobbyV2LobbyMembers(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolLobbyLobbyParticipantDto>> {
        _client.https.request("get", "/lol-lobby/v2/lobby/members?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLobbyLobbyParticipantDto>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyV2LobbyMembers(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolLobbyLobbyParticipantDto>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v2/lobby/members?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolLobbyLobbyParticipantDto>> { response });
          else
            cb(_client,Result<std::vector<LolLobbyLobbyParticipantDto>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}