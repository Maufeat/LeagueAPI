#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyReceivedInvitationDto.hpp"
namespace lol {
  inline Result<std::vector<LolLobbyReceivedInvitationDto>> GetLolLobbyV2ReceivedInvitations(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<LolLobbyReceivedInvitationDto>>(_client.https.request("get", "/lol-lobby/v2/received-invitations?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLobbyReceivedInvitationDto>>(e.code());
    }
  }
  inline void GetLolLobbyV2ReceivedInvitations(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<LolLobbyReceivedInvitationDto>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v2/received-invitations?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLobbyReceivedInvitationDto>>(e));
            else
              cb(_client, ToResult<std::vector<LolLobbyReceivedInvitationDto>>(response));
        });
  }
}