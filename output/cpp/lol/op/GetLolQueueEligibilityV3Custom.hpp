#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolQueueEligibilityEligibility.hpp"
namespace lol {
  inline Result<std::vector<LolQueueEligibilityEligibility>> GetLolQueueEligibilityV3Custom(LeagueClient& _client, const int32_t& teamSize, const std::string& pickMode)
  {
    try {
      return Result<std::vector<LolQueueEligibilityEligibility>> {
        _client.https.request("get", "/lol-queue-eligibility/v3/custom?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "teamSize", to_string(teamSize) },
           { "pickMode", to_string(pickMode) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolQueueEligibilityEligibility>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolQueueEligibilityV3Custom(LeagueClient& _client, const int32_t& teamSize, const std::string& pickMode, std::function<void(LeagueClient&,const Result<std::vector<LolQueueEligibilityEligibility>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-queue-eligibility/v3/custom?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "teamSize", to_string(teamSize) },
           { "pickMode", to_string(pickMode) }, })), 
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