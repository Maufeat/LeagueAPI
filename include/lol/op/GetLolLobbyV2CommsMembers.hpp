#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyPremadePartyDto.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyPremadePartyDto> GetLolLobbyV2CommsMembers(T& _client)
  {
    try {
      return ToResult<LolLobbyPremadePartyDto>(_client.https.request("get", "/lol-lobby/v2/comms/members?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyPremadePartyDto>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLobbyV2CommsMembers(T& _client, std::function<void(T&, const Result<LolLobbyPremadePartyDto>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v2/comms/members?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyPremadePartyDto>(e));
            else
              cb(_client, ToResult<LolLobbyPremadePartyDto>(response));
        });
  }
}