#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/ServiceStatusResource.hpp"
namespace lol {
  inline Result<ServiceStatusResource> GetLolServiceStatusV1LcuStatus(LeagueClient& _client)
  {
    try {
      return ToResult<ServiceStatusResource>(_client.https.request("get", "/lol-service-status/v1/lcu-status?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<ServiceStatusResource>(e.code());
    }
  }
  inline void GetLolServiceStatusV1LcuStatus(LeagueClient& _client, std::function<void(LeagueClient&, const Result<ServiceStatusResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-service-status/v1/lcu-status?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<ServiceStatusResource>(e));
            else
              cb(_client, ToResult<ServiceStatusResource>(response));
        });
  }
}