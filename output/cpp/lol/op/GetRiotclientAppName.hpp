#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::string> GetRiotclientAppName(LeagueClient& _client)
  {
    try {
      return Result<std::string> {
        _client.https.request("get", "/riotclient/app-name?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::string> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetRiotclientAppName(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::string>&)> cb)
  {
    _client.httpsa.request("get", "/riotclient/app-name?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::string> { response });
          else
            cb(_client,Result<std::string> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}