#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolHonorV2VendedHonorChange.hpp>
namespace lol {
  Result<LolHonorV2VendedHonorChange> GetLolHonorV2V1LevelChange(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-honor-v2/v1/level-change?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}