#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderDebugConfig.hpp>
namespace lol {
  Result<RecofrienderDebugConfig> PutRecofrienderV1Debug(const LeagueClient& _client, const RecofrienderDebugConfig& debugConfiguration)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/recofriender/v1/debug?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(debugConfiguration).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}