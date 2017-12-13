#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/BuildInfo.hpp>
namespace lol {
  Result<BuildInfo> GetSystemV1Builds(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/system/v1/builds?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}