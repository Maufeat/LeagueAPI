#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolQueueEligibilityEligibility.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolQueueEligibilityEligibility>> GetLolQueueEligibilityV3Custom(T& _client, const int32_t& teamSize, const std::string& pickMode)
  {
    try {
      return ToResult<std::vector<LolQueueEligibilityEligibility>>(_client.https.request("get", "/lol-queue-eligibility/v3/custom?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "teamSize", to_string(teamSize) },
          { "pickMode", to_string(pickMode) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolQueueEligibilityEligibility>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolQueueEligibilityV3Custom(T& _client, const int32_t& teamSize, const std::string& pickMode, std::function<void(T&, const Result<std::vector<LolQueueEligibilityEligibility>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-queue-eligibility/v3/custom?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "teamSize", to_string(teamSize) },
          { "pickMode", to_string(pickMode) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolQueueEligibilityEligibility>>(e));
            else
              cb(_client, ToResult<std::vector<LolQueueEligibilityEligibility>>(response));
        });
  }
}