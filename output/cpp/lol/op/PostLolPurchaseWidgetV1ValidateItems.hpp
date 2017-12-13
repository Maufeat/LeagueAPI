#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPurchaseWidgetValidationRequest.hpp>
namespace lol {
  Result<json> PostLolPurchaseWidgetV1ValidateItems(const LeagueClient& _client, const LolPurchaseWidgetValidationRequest& validationRequest)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-purchase-widget/v1/validateItems?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(validationRequest).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}