#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashPlayerData.hpp"
namespace lol {
  template<typename T>
  inline Result<LolClashPlayerData> GetLolClashV1Player(T& _client)
  {
    try {
      return ToResult<LolClashPlayerData>(_client.https.request("get", "/lol-clash/v1/player?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolClashPlayerData>(e.code());
    }
  }
  template<typename T>
  inline void GetLolClashV1Player(T& _client, std::function<void(T&, const Result<LolClashPlayerData>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/player?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolClashPlayerData>(e));
            else
              cb(_client, ToResult<LolClashPlayerData>(response));
        });
  }
}