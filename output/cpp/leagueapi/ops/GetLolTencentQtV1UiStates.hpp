#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/TencentQTNotification.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::map<std::string, TencentQTNotification>> GetLolTencentQtV1UiStates (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-tencent-qt/v1/ui-states?", { 
    }, { 
    }) };
  }
} 