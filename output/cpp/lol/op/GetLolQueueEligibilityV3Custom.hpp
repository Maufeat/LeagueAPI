#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolQueueEligibilityEligibility.hpp>
namespace lol {
  Result<std::vector<LolQueueEligibilityEligibility>> GetLolQueueEligibilityV3Custom(const LeagueClient& _client, const int32_t& teamSize, const std::string& pickMode)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-queue-eligibility/v3/custom?" + SimpleWeb::QueryString::create(Args2Headers({ { "teamSize", to_string(teamSize) },
    { "pickMode", to_string(pickMode) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}