#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolHonorV2HonorConfig.hpp"
namespace lol {
  template<typename T>
  inline Result<LolHonorV2HonorConfig> GetLolHonorV2V1Config(T& _client)
  {
    try {
      return ToResult<LolHonorV2HonorConfig>(_client.https.request("get", "/lol-honor-v2/v1/config?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolHonorV2HonorConfig>(e.code());
    }
  }
  template<typename T>
  inline void GetLolHonorV2V1Config(T& _client, std::function<void(T&, const Result<LolHonorV2HonorConfig>&)> cb)
  {
    _client.httpsa.request("get", "/lol-honor-v2/v1/config?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolHonorV2HonorConfig>(e));
            else
              cb(_client, ToResult<LolHonorV2HonorConfig>(response));
        });
  }
}