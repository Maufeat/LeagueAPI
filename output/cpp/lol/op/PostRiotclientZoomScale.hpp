#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostRiotclientZoomScale(const LeagueClient& _client, const double& newZoomScale)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/riotclient/zoom-scale?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "newZoomScale", to_string(newZoomScale) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}