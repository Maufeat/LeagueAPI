#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ServiceStatusResource.hpp>
namespace lol {
  Result<ServiceStatusResource> GetLolServiceStatusV1LcuStatus(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-service-status/v1/lcu-status?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}