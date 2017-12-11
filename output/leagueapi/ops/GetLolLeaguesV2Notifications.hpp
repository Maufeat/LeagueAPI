#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLeaguesLeaguesNotification.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLeaguesLeaguesNotification>> GetLolLeaguesV2Notifications (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-leagues/v2/notifications?", { 
    }, { 
    },"") };
  }
} 