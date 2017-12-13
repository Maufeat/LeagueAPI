#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostTelemetryV1EventsWithPerfInfoByEventType(const LeagueClient& _client, const std::string& eventType, const std::map<std::string, json>& eventData)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/telemetry/v1/events-with-perf-info/"+to_string(eventType)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(eventData).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}