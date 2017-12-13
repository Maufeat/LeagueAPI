#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPurchaseWidgetPurchaseWidgetConfig.hpp>
namespace lol {
  Result<LolPurchaseWidgetPurchaseWidgetConfig> GetLolPurchaseWidgetV1Configuration(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-purchase-widget/v1/configuration?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}