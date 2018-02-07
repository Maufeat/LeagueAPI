#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolHonorV2VendedReward.hpp"
namespace lol {
  template<typename T>
  inline Result<LolHonorV2VendedReward> GetLolHonorV2V1RewardGranted(T& _client)
  {
    try {
      return ToResult<LolHonorV2VendedReward>(_client.https.request("get", "/lol-honor-v2/v1/reward-granted?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolHonorV2VendedReward>(e.code());
    }
  }
  template<typename T>
  inline void GetLolHonorV2V1RewardGranted(T& _client, std::function<void(T&, const Result<LolHonorV2VendedReward>&)> cb)
  {
    _client.httpsa.request("get", "/lol-honor-v2/v1/reward-granted?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolHonorV2VendedReward>(e));
            else
              cb(_client, ToResult<LolHonorV2VendedReward>(response));
        });
  }
}