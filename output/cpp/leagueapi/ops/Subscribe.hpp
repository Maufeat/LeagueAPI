#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RemotingSerializedFormat.hpp>

namespace leagueapi::op {
  /*Subscribes to a given event*/
  static https::Result<json> Subscribe (const https::Info& _info_,
      const std::string& eventName /*Name of the event to subscribe to*/ ,
      const std::optional<RemotingSerializedFormat>& format = std::nullopt /*Desired format to receive events in. If unspecified, events will be sent in the active result format at the time.*/)
  { 
    return { https::Do(_info_, "post", "/Subscribe?", { 
      { "eventName", to_string(eventName) },
      { "format", to_string(format) },
    }, { 
    }) };
  }
} 