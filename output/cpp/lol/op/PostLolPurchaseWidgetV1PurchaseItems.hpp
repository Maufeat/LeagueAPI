#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPurchaseWidgetPurchaseRequest.hpp>
namespace lol {
  Result<json> PostLolPurchaseWidgetV1PurchaseItems(const LeagueClient& _client, const LolPurchaseWidgetPurchaseRequest& purchaseRequest)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-purchase-widget/v1/purchaseItems?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(purchaseRequest).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}