#pragma once
#include "../base_op.hpp" 
#include "../def/BuildInfo.hpp"
namespace lol {
  inline Result<BuildInfo> GetSystemV1Builds(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<BuildInfo> {
        _client_.request("get", "/system/v1/builds?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<BuildInfo> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}