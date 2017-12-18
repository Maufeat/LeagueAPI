#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> PostTelemetryV1CommonDataByKey(LeagueClient& _client, const std::string& key, const std::string& value)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/telemetry/v1/common-data/"+to_string(key)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(value).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostTelemetryV1CommonDataByKey(LeagueClient& _client, const std::string& key, const std::string& value, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/telemetry/v1/common-data/"+to_string(key)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(value).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}