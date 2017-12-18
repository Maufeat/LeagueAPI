#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPurchaseWidgetPurchaseWidgetConfig.hpp>
namespace lol {
  inline Result<LolPurchaseWidgetPurchaseWidgetConfig> GetLolPurchaseWidgetV1Configuration(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolPurchaseWidgetPurchaseWidgetConfig> {
        _client_.request("get", "/lol-purchase-widget/v1/configuration?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPurchaseWidgetPurchaseWidgetConfig> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}