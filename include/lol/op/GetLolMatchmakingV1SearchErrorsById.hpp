#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMatchmakingMatchmakingSearchErrorResource.hpp"
namespace lol {
  template<typename T>
  inline Result<LolMatchmakingMatchmakingSearchErrorResource> GetLolMatchmakingV1SearchErrorsById(T& _client, const int32_t& id)
  {
    try {
      return ToResult<LolMatchmakingMatchmakingSearchErrorResource>(_client.https.request("get", "/lol-matchmaking/v1/search/errors/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolMatchmakingMatchmakingSearchErrorResource>(e.code());
    }
  }
  template<typename T>
  inline void GetLolMatchmakingV1SearchErrorsById(T& _client, const int32_t& id, std::function<void(T&, const Result<LolMatchmakingMatchmakingSearchErrorResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-matchmaking/v1/search/errors/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolMatchmakingMatchmakingSearchErrorResource>(e));
            else
              cb(_client, ToResult<LolMatchmakingMatchmakingSearchErrorResource>(response));
        });
  }
}