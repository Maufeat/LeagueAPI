#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<void> PostTelemetryV1EventsWithPerfInfoByEventType(const LeagueClient& _client, const std::string& eventType, const std::map<std::string, json>& eventData)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/telemetry/v1/events-with-perf-info/"+to_string(eventType)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(eventData).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}