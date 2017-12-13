#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPurchaseWidgetValidationRequest.hpp>
namespace lol {
  Result<json> PostLolPurchaseWidgetV1ValidateItems(const LeagueClient& _client, const LolPurchaseWidgetValidationRequest& validationRequest)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-purchase-widget/v1/validateItems?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(validationRequest).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}