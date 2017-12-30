#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyMember.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolLobbyLobbyMember>> GetLolLobbyV1LobbyMembers(T& _client)
  {
    try {
      return ToResult<std::vector<LolLobbyLobbyMember>>(_client.https.request("get", "/lol-lobby/v1/lobby/members?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLobbyLobbyMember>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLobbyV1LobbyMembers(T& _client, std::function<void(T&, const Result<std::vector<LolLobbyLobbyMember>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/lobby/members?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLobbyLobbyMember>>(e));
            else
              cb(_client, ToResult<std::vector<LolLobbyLobbyMember>>(response));
        });
  }
}