#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Adds a new event to be sent to Dradis and/or other analytics/monitoring data sinks. This will include current performance information along with the passed in data. Each call will record the performance counters then reset them for use in the next call. All events will have their eventType prefixed with ""*/
  static https::Result<void> PostTelemetryV1EventsWithPerfInfoByEventType (const https::Info& _info_,
      const std::string& eventType /*The name of the event type*/,
      const std::map<std::string, json>& eventData /*A map of event data*/ )
  { 
    return { https::Do(_info_, "post", "/telemetry/v1/events-with-perf-info/"+to_string(eventType)+"?", { 
    }, { 
    },eventData) };
  }
} 