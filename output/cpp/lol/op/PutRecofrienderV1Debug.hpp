#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderDebugConfig.hpp>
namespace lol {
  inline Result<RecofrienderDebugConfig> PutRecofrienderV1Debug(const LeagueClient& _client, const RecofrienderDebugConfig& debugConfiguration)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RecofrienderDebugConfig> {
        _client_.request("put", "/recofriender/v1/debug?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(debugConfiguration).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RecofrienderDebugConfig> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}