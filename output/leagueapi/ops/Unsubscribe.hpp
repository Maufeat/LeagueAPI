#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Unsubscribes from a given event*/
  static https::Result<json> Unsubscribe (const https::Info& _info_,
      const std::string& eventName /*Name of the event to unsubscribe from*/ )
  { 
    return { https::Do(_info_, "post", "/Unsubscribe?", { 
      { "eventName", https::to_string(eventName) },
    }, { 
    },"") };
  }
} 