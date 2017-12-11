#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPurchaseWidgetPurchaseRequest.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolPurchaseWidgetV1PurchaseItems (const https::Info& _info_,
      const LolPurchaseWidgetPurchaseRequest& purchaseRequest /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-purchase-widget/v1/purchaseItems?", { 
    }, { 
    },purchaseRequest) };
  }
} 