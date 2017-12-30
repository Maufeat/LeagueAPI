#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyInvitation.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolLobbyLobbyInvitation>> GetLolLobbyV1ReceivedInvitations(T& _client)
  {
    try {
      return ToResult<std::vector<LolLobbyLobbyInvitation>>(_client.https.request("get", "/lol-lobby/v1/received-invitations?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLobbyLobbyInvitation>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLobbyV1ReceivedInvitations(T& _client, std::function<void(T&, const Result<std::vector<LolLobbyLobbyInvitation>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/received-invitations?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLobbyLobbyInvitation>>(e));
            else
              cb(_client, ToResult<std::vector<LolLobbyLobbyInvitation>>(response));
        });
  }
}