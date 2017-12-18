#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPurchaseWidgetPurchaseRequest.hpp>
namespace lol {
  inline Result<json> PostLolPurchaseWidgetV1PurchaseItems(const LeagueClient& _client, const LolPurchaseWidgetPurchaseRequest& purchaseRequest)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-purchase-widget/v1/purchaseItems?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(purchaseRequest).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}