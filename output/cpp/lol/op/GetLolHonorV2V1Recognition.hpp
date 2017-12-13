#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolHonorV2Honor.hpp>
namespace lol {
  Result<std::vector<LolHonorV2Honor>> GetLolHonorV2V1Recognition(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-honor-v2/v1/recognition?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}