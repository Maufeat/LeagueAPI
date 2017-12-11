#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/TencentQTNotification.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolTencentQtV1UiStatesByFeature (const https::Info& _info_,
      const std::string& feature /**/,
      const TencentQTNotification& state /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-tencent-qt/v1/ui-states/"+to_string(feature)+"?", { 
    }, { 
    },state) };
  }
} 