#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolHonorV2ProfileInfo.hpp"
namespace lol {
  template<typename T>
  inline Result<LolHonorV2ProfileInfo> GetLolHonorV2V1Profile(T& _client)
  {
    try {
      return ToResult<LolHonorV2ProfileInfo>(_client.https.request("get", "/lol-honor-v2/v1/profile?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolHonorV2ProfileInfo>(e.code());
    }
  }
  template<typename T>
  inline void GetLolHonorV2V1Profile(T& _client, std::function<void(T&, const Result<LolHonorV2ProfileInfo>&)> cb)
  {
    _client.httpsa.request("get", "/lol-honor-v2/v1/profile?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolHonorV2ProfileInfo>(e));
            else
              cb(_client, ToResult<LolHonorV2ProfileInfo>(response));
        });
  }
}