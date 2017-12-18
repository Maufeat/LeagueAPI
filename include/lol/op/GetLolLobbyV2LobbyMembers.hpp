#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyParticipantDto.hpp"
namespace lol {
  inline Result<std::vector<LolLobbyLobbyParticipantDto>> GetLolLobbyV2LobbyMembers(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<LolLobbyLobbyParticipantDto>>(_client.https.request("get", "/lol-lobby/v2/lobby/members?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLobbyLobbyParticipantDto>>(e.code());
    }
  }
  inline void GetLolLobbyV2LobbyMembers(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<LolLobbyLobbyParticipantDto>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v2/lobby/members?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLobbyLobbyParticipantDto>>(e));
            else
              cb(_client, ToResult<std::vector<LolLobbyLobbyParticipantDto>>(response));
        });
  }
}