#pragma once
#include "../base_op.hpp" 
#include "../def/RecofrienderDebugConfig.hpp"
namespace lol {
  inline Result<RecofrienderDebugConfig> GetRecofrienderV1Debug(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RecofrienderDebugConfig> {
        _client_.request("get", "/recofriender/v1/debug?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RecofrienderDebugConfig> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}