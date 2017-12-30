#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyInvitation.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyLobbyInvitation> GetLolLobbyV1LobbyInvitationsById(T& _client, const std::string& id)
  {
    try {
      return ToResult<LolLobbyLobbyInvitation>(_client.https.request("get", "/lol-lobby/v1/lobby/invitations/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyLobbyInvitation>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLobbyV1LobbyInvitationsById(T& _client, const std::string& id, std::function<void(T&, const Result<LolLobbyLobbyInvitation>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/lobby/invitations/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyLobbyInvitation>(e));
            else
              cb(_client, ToResult<LolLobbyLobbyInvitation>(response));
        });
  }
}