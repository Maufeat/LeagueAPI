#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> GetLolKrPlaytimeReminderV1Message (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-kr-playtime-reminder/v1/message?", { 
    }, { 
    }) };
  }
} 