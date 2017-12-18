#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<void> PutLolBetaOptInV1MigrationError(LeagueClient& _client, const std::string& errString)
  {
    try {
      return Result<void> {
        _client.https.request("put", "/lol-beta-opt-in/v1/migration-error?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "errString", to_string(errString) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PutLolBetaOptInV1MigrationError(LeagueClient& _client, const std::string& errString, std::function<void(LeagueClient&,const Result<void>&)> cb)
  {
    _client.httpsa.request("put", "/lol-beta-opt-in/v1/migration-error?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "errString", to_string(errString) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<void> { response });
          else
            cb(_client,Result<void> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}