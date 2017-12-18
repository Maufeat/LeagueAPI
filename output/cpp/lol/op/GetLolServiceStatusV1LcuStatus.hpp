#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ServiceStatusResource.hpp>
namespace lol {
  inline Result<ServiceStatusResource> GetLolServiceStatusV1LcuStatus(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<ServiceStatusResource> {
        _client_.request("get", "/lol-service-status/v1/lcu-status?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<ServiceStatusResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}