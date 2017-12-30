#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolQueueEligibilityEligibility.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolQueueEligibilityEligibility>> GetLolQueueEligibilityV3Eligibility(T& _client, const std::vector<uint64_t>& summonerIds, const std::vector<int32_t>& queueIds)
  {
    try {
      return ToResult<std::vector<LolQueueEligibilityEligibility>>(_client.https.request("get", "/lol-queue-eligibility/v3/eligibility?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "summonerIds", to_string(summonerIds) },
          { "queueIds", to_string(queueIds) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolQueueEligibilityEligibility>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolQueueEligibilityV3Eligibility(T& _client, const std::vector<uint64_t>& summonerIds, const std::vector<int32_t>& queueIds, std::function<void(T&, const Result<std::vector<LolQueueEligibilityEligibility>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-queue-eligibility/v3/eligibility?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "summonerIds", to_string(summonerIds) },
          { "queueIds", to_string(queueIds) }, })), 
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