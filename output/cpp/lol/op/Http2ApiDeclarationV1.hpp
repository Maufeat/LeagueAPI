#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> Http2ApiDeclarationV1(LeagueClient& _client, const std::string& api)
  {
    try {
      return Result<json> {
        _client.https.request("get", "/v1/api-docs/"+to_string(api)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void Http2ApiDeclarationV1(LeagueClient& _client, const std::string& api, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("get", "/v1/api-docs/"+to_string(api)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}