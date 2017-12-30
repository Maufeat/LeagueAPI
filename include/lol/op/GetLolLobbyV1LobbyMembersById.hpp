#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyMember.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyLobbyMember> GetLolLobbyV1LobbyMembersById(T& _client, const uint64_t& id)
  {
    try {
      return ToResult<LolLobbyLobbyMember>(_client.https.request("get", "/lol-lobby/v1/lobby/members/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyLobbyMember>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLobbyV1LobbyMembersById(T& _client, const uint64_t& id, std::function<void(T&, const Result<LolLobbyLobbyMember>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/lobby/members/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyLobbyMember>(e));
            else
              cb(_client, ToResult<LolLobbyLobbyMember>(response));
        });
  }
}