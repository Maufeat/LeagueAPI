#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolEsportStreamNotificationsESportsLiveStreams.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolEsportStreamNotificationsESportsLiveStreams> GetLolEsportStreamNotificationsV1LiveStreams (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-esport-stream-notifications/v1/live-streams?", { 
    }, { 
    }) };
  }
} 