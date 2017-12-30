#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> PostTelemetryV1EventsWithPerfInfoByEventType(T& _client, const std::string& eventType, const std::map<std::string, json>& eventData)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/telemetry/v1/events-with-perf-info/"+to_string(eventType)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(eventData).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostTelemetryV1EventsWithPerfInfoByEventType(T& _client, const std::string& eventType, const std::map<std::string, json>& eventData, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/telemetry/v1/events-with-perf-info/"+to_string(eventType)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(eventData).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}