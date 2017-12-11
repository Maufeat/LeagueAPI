#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPurchaseWidgetValidationRequest.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolPurchaseWidgetV1ValidateItems (const https::Info& _info_,
      const LolPurchaseWidgetValidationRequest& validationRequest /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-purchase-widget/v1/validateItems?", { 
    }, { 
    },validationRequest) };
  }
} 