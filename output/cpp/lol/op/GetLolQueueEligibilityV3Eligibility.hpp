#pragma once
#include "../base_op.hpp" 
#include "../def/LolQueueEligibilityEligibility.hpp"
namespace lol {
  inline Result<std::vector<LolQueueEligibilityEligibility>> GetLolQueueEligibilityV3Eligibility(const LeagueClient& _client, const std::vector<uint64_t>& summonerIds, const std::vector<int32_t>& queueIds)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolQueueEligibilityEligibility>> {
        _client_.request("get", "/lol-queue-eligibility/v3/eligibility?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "summonerIds", to_string(summonerIds) },
           { "queueIds", to_string(queueIds) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolQueueEligibilityEligibility>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}