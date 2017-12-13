#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolQueueEligibilityEligibility.hpp>
namespace lol {
  Result<std::vector<LolQueueEligibilityEligibility>> GetLolQueueEligibilityV3Custom(const LeagueClient& _client, const int32_t& teamSize, const std::string& pickMode)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolQueueEligibilityEligibility>> {
        _client_.request("get", "/lol-queue-eligibility/v3/custom?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "teamSize", to_string(teamSize) },
           { "pickMode", to_string(pickMode) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolQueueEligibilityEligibility>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}