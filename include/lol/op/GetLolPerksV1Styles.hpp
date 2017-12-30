#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPerksPerkUIStyle.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolPerksPerkUIStyle>> GetLolPerksV1Styles(T& _client)
  {
    try {
      return ToResult<std::vector<LolPerksPerkUIStyle>>(_client.https.request("get", "/lol-perks/v1/styles?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolPerksPerkUIStyle>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolPerksV1Styles(T& _client, std::function<void(T&, const Result<std::vector<LolPerksPerkUIStyle>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-perks/v1/styles?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolPerksPerkUIStyle>>(e));
            else
              cb(_client, ToResult<std::vector<LolPerksPerkUIStyle>>(response));
        });
  }
}