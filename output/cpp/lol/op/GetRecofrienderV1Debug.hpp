#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderDebugConfig.hpp>
namespace lol {
  Result<RecofrienderDebugConfig> GetRecofrienderV1Debug(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/recofriender/v1/debug?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}