#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Adds a new event to be sent to Dradis and/or other analytics/monitoring data sinks. All events will have their eventType prefixed with ""*/
  static https::Result<void> PostTelemetryV1EventsByEventType (const https::Info& _info_,
      const std::string& eventType /*The name of the event type*/,
      const std::map<std::string, json>& eventData /*A map of event data*/ )
  { 
    return { https::Do(_info_, "post", "/telemetry/v1/events/"+to_string(eventType)+"?", { 
    }, { 
    },eventData) };
  }
} 