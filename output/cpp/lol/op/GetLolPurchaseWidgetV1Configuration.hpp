#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPurchaseWidgetPurchaseWidgetConfig.hpp"
namespace lol {
  inline Result<LolPurchaseWidgetPurchaseWidgetConfig> GetLolPurchaseWidgetV1Configuration(LeagueClient& _client)
  {
    try {
      return Result<LolPurchaseWidgetPurchaseWidgetConfig> {
        _client.https.request("get", "/lol-purchase-widget/v1/configuration?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPurchaseWidgetPurchaseWidgetConfig> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolPurchaseWidgetV1Configuration(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolPurchaseWidgetPurchaseWidgetConfig>&)> cb)
  {
    _client.httpsa.request("get", "/lol-purchase-widget/v1/configuration?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolPurchaseWidgetPurchaseWidgetConfig> { response });
          else
            cb(_client,Result<LolPurchaseWidgetPurchaseWidgetConfig> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}