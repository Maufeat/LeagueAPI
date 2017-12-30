#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolHonorV2Honor.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolHonorV2Honor>> GetLolHonorV2V1LateRecognition(T& _client)
  {
    try {
      return ToResult<std::vector<LolHonorV2Honor>>(_client.https.request("get", "/lol-honor-v2/v1/late-recognition?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolHonorV2Honor>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolHonorV2V1LateRecognition(T& _client, std::function<void(T&, const Result<std::vector<LolHonorV2Honor>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-honor-v2/v1/late-recognition?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolHonorV2Honor>>(e));
            else
              cb(_client, ToResult<std::vector<LolHonorV2Honor>>(response));
        });
  }
}