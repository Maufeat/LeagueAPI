#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RsoAuthRegionStatus.hpp"
namespace lol {
  template<typename T>
  inline Result<RsoAuthRegionStatus> GetRsoAuthV1StatusByPlatformId(T& _client, const std::string& platformId)
  {
    try {
      return ToResult<RsoAuthRegionStatus>(_client.https.request("get", "/rso-auth/v1/status/"+to_string(platformId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RsoAuthRegionStatus>(e.code());
    }
  }
  template<typename T>
  inline void GetRsoAuthV1StatusByPlatformId(T& _client, const std::string& platformId, std::function<void(T&, const Result<RsoAuthRegionStatus>&)> cb)
  {
    _client.httpsa.request("get", "/rso-auth/v1/status/"+to_string(platformId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RsoAuthRegionStatus>(e));
            else
              cb(_client, ToResult<RsoAuthRegionStatus>(response));
        });
  }
}