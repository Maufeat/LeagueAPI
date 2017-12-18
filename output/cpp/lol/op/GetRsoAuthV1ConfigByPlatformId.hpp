#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RsoAuthRSOJWTConfig.hpp"
namespace lol {
  inline Result<RsoAuthRSOJWTConfig> GetRsoAuthV1ConfigByPlatformId(LeagueClient& _client, const std::string& platformId)
  {
    try {
      return Result<RsoAuthRSOJWTConfig> {
        _client.https.request("get", "/rso-auth/v1/config/"+to_string(platformId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RsoAuthRSOJWTConfig> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetRsoAuthV1ConfigByPlatformId(LeagueClient& _client, const std::string& platformId, std::function<void(LeagueClient&,const Result<RsoAuthRSOJWTConfig>&)> cb)
  {
    _client.httpsa.request("get", "/rso-auth/v1/config/"+to_string(platformId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<RsoAuthRSOJWTConfig> { response });
          else
            cb(_client,Result<RsoAuthRSOJWTConfig> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}