#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> GetLolBetaOptInV1MigrationError(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::string> {
        _client_.request("get", "/lol-beta-opt-in/v1/migration-error?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::string> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}