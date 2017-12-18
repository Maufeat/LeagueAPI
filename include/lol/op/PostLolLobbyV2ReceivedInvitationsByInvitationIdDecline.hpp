#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> PostLolLobbyV2ReceivedInvitationsByInvitationIdDecline(LeagueClient& _client, const std::string& invitationId)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/lol-lobby/v2/received-invitations/"+to_string(invitationId)+"/decline?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostLolLobbyV2ReceivedInvitationsByInvitationIdDecline(LeagueClient& _client, const std::string& invitationId, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby/v2/received-invitations/"+to_string(invitationId)+"/decline?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}