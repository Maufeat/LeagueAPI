#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolHonorV2HonorConfig.hpp>
namespace lol {
  Result<LolHonorV2HonorConfig> GetLolHonorV2V1Config(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-honor-v2/v1/config?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}