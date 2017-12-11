#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPurchaseWidgetPurchaseWidgetConfig.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPurchaseWidgetPurchaseWidgetConfig> GetLolPurchaseWidgetV1Configuration (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-purchase-widget/v1/configuration?", { 
    }, { 
    }) };
  }
} 