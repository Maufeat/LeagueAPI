#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<double> GetRiotclientZoomScale(LeagueClient& _client)
  {
    try {
      return Result<double> {
        _client.https.request("get", "/riotclient/zoom-scale?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<double> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetRiotclientZoomScale(LeagueClient& _client, std::function<void(LeagueClient&,const Result<double>&)> cb)
  {
    _client.httpsa.request("get", "/riotclient/zoom-scale?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<double> { response });
          else
            cb(_client,Result<double> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}