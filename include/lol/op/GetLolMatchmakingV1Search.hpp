#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMatchmakingMatchmakingSearchResource.hpp"
namespace lol {
  template<typename T>
  inline Result<LolMatchmakingMatchmakingSearchResource> GetLolMatchmakingV1Search(T& _client)
  {
    try {
      return ToResult<LolMatchmakingMatchmakingSearchResource>(_client.https.request("get", "/lol-matchmaking/v1/search?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolMatchmakingMatchmakingSearchResource>(e.code());
    }
  }
  template<typename T>
  inline void GetLolMatchmakingV1Search(T& _client, std::function<void(T&, const Result<LolMatchmakingMatchmakingSearchResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-matchmaking/v1/search?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolMatchmakingMatchmakingSearchResource>(e));
            else
              cb(_client, ToResult<LolMatchmakingMatchmakingSearchResource>(response));
        });
  }
}