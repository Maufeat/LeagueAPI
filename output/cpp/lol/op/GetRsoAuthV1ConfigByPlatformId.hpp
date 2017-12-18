#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RsoAuthRSOJWTConfig.hpp>
namespace lol {
  inline Result<RsoAuthRSOJWTConfig> GetRsoAuthV1ConfigByPlatformId(const LeagueClient& _client, const std::string& platformId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RsoAuthRSOJWTConfig> {
        _client_.request("get", "/rso-auth/v1/config/"+to_string(platformId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RsoAuthRSOJWTConfig> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}