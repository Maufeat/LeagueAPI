#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<double> GetRiotclientZoomScale(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<double> {
        _client_.request("get", "/riotclient/zoom-scale?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<double> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}