#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyPartyRewards.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyLobbyPartyRewards> GetLolLobbyV1PartyRewards(T& _client)
  {
    try {
      return ToResult<LolLobbyLobbyPartyRewards>(_client.https.request("get", "/lol-lobby/v1/party-rewards?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyLobbyPartyRewards>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLobbyV1PartyRewards(T& _client, std::function<void(T&, const Result<LolLobbyLobbyPartyRewards>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/party-rewards?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyLobbyPartyRewards>(e));
            else
              cb(_client, ToResult<LolLobbyLobbyPartyRewards>(response));
        });
  }
}