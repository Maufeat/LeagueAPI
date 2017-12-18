#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::vector<std::string>> GetPatcherV1Products(LeagueClient& _client)
  {
    try {
      return Result<std::vector<std::string>> {
        _client.https.request("get", "/patcher/v1/products?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<std::string>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetPatcherV1Products(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<std::string>>&)> cb)
  {
    _client.httpsa.request("get", "/patcher/v1/products?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<std::string>> { response });
          else
            cb(_client,Result<std::vector<std::string>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}