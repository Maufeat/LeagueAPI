#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<uint64_t> GetLolHonorV2V1LatestEligibleGame(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-honor-v2/v1/latest-eligible-game?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}