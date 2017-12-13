#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolHonorV2V1RewardGrantedAck(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-honor-v2/v1/reward-granted/ack?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}