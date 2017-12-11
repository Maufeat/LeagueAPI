#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/TencentQTNotification.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<TencentQTNotification> GetLolTencentQtV1UiStatesByFeature (const https::Info& _info_,
      const std::string& feature /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-tencent-qt/v1/ui-states/"+to_string(feature)+"?", { 
    }, { 
    }) };
  }
} 