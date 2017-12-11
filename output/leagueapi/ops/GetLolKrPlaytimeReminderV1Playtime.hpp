#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlaytimeReminder.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlaytimeReminder> GetLolKrPlaytimeReminderV1Playtime (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-kr-playtime-reminder/v1/playtime?", { 
    }, { 
    },"") };
  }
} 