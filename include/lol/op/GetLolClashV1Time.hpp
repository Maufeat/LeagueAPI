#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<int64_t> GetLolClashV1Time(LeagueClient& _client)
  {
    try {
      return ToResult<int64_t>(_client.https.request("get", "/lol-clash/v1/time?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<int64_t>(e.code());
    }
  }
  inline void GetLolClashV1Time(LeagueClient& _client, std::function<void(LeagueClient&, const Result<int64_t>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/time?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<int64_t>(e));
            else
              cb(_client, ToResult<int64_t>(response));
        });
  }
}