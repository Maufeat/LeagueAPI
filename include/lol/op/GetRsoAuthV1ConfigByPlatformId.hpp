#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RsoAuthRSOJWTConfig.hpp"
namespace lol {
  template<typename T>
  inline Result<RsoAuthRSOJWTConfig> GetRsoAuthV1ConfigByPlatformId(T& _client, const std::string& platformId)
  {
    try {
      return ToResult<RsoAuthRSOJWTConfig>(_client.https.request("get", "/rso-auth/v1/config/"+to_string(platformId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RsoAuthRSOJWTConfig>(e.code());
    }
  }
  template<typename T>
  inline void GetRsoAuthV1ConfigByPlatformId(T& _client, const std::string& platformId, std::function<void(T&, const Result<RsoAuthRSOJWTConfig>&)> cb)
  {
    _client.httpsa.request("get", "/rso-auth/v1/config/"+to_string(platformId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RsoAuthRSOJWTConfig>(e));
            else
              cb(_client, ToResult<RsoAuthRSOJWTConfig>(response));
        });
  }
}