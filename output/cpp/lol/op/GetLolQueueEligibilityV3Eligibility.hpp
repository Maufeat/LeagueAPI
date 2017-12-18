#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolQueueEligibilityEligibility.hpp"
namespace lol {
  inline Result<std::vector<LolQueueEligibilityEligibility>> GetLolQueueEligibilityV3Eligibility(LeagueClient& _client, const std::vector<uint64_t>& summonerIds, const std::vector<int32_t>& queueIds)
  {
    try {
      return Result<std::vector<LolQueueEligibilityEligibility>> {
        _client.https.request("get", "/lol-queue-eligibility/v3/eligibility?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "summonerIds", to_string(summonerIds) },
           { "queueIds", to_string(queueIds) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolQueueEligibilityEligibility>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolQueueEligibilityV3Eligibility(LeagueClient& _client, const std::vector<uint64_t>& summonerIds, const std::vector<int32_t>& queueIds, std::function<void(LeagueClient&,const Result<std::vector<LolQueueEligibilityEligibility>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-queue-eligibility/v3/eligibility?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "summonerIds", to_string(summonerIds) },
           { "queueIds", to_string(queueIds) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolQueueEligibilityEligibility>> { response });
          else
            cb(_client,Result<std::vector<LolQueueEligibilityEligibility>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}