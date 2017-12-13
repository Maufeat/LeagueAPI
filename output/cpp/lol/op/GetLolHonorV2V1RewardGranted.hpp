#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolHonorV2Reward.hpp>
namespace lol {
  Result<LolHonorV2Reward> GetLolHonorV2V1RewardGranted(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-honor-v2/v1/reward-granted?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}