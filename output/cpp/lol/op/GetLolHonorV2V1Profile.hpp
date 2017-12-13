#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolHonorV2ProfileInfo.hpp>
namespace lol {
  Result<LolHonorV2ProfileInfo> GetLolHonorV2V1Profile(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-honor-v2/v1/profile?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}