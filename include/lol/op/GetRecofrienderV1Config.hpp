#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderConfig.hpp"
namespace lol {
  inline Result<RecofrienderConfig> GetRecofrienderV1Config(LeagueClient& _client)
  {
    try {
      return ToResult<RecofrienderConfig>(_client.https.request("get", "/recofriender/v1/config?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RecofrienderConfig>(e.code());
    }
  }
  inline void GetRecofrienderV1Config(LeagueClient& _client, std::function<void(LeagueClient&, const Result<RecofrienderConfig>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v1/config?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RecofrienderConfig>(e));
            else
              cb(_client, ToResult<RecofrienderConfig>(response));
        });
  }
}