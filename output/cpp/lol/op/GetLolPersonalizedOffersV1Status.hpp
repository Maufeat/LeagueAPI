#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<bool> GetLolPersonalizedOffersV1Status(LeagueClient& _client)
  {
    try {
      return Result<bool> {
        _client.https.request("get", "/lol-personalized-offers/v1/status?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<bool> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolPersonalizedOffersV1Status(LeagueClient& _client, std::function<void(LeagueClient&,const Result<bool>&)> cb)
  {
    _client.httpsa.request("get", "/lol-personalized-offers/v1/status?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<bool> { response });
          else
            cb(_client,Result<bool> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}