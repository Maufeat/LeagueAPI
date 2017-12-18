#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<int64_t> GetLolClashV1Time(LeagueClient& _client)
  {
    try {
      return Result<int64_t> {
        _client.https.request("get", "/lol-clash/v1/time?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<int64_t> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClashV1Time(LeagueClient& _client, std::function<void(LeagueClient&,const Result<int64_t>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/time?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<int64_t> { response });
          else
            cb(_client,Result<int64_t> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}