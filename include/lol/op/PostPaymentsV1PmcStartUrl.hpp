#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PaymentsFrontEndRequest.hpp"
#include "../def/PaymentsFrontEndResult.hpp"
namespace lol {
  inline Result<PaymentsFrontEndResult> PostPaymentsV1PmcStartUrl(LeagueClient& _client, const PaymentsFrontEndRequest& options)
  {
    try {
      return ToResult<PaymentsFrontEndResult>(_client.https.request("post", "/payments/v1/pmc-start-url?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(options).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PaymentsFrontEndResult>(e.code());
    }
  }
  inline void PostPaymentsV1PmcStartUrl(LeagueClient& _client, const PaymentsFrontEndRequest& options, std::function<void(LeagueClient&, const Result<PaymentsFrontEndResult>&)> cb)
  {
    _client.httpsa.request("post", "/payments/v1/pmc-start-url?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(options).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PaymentsFrontEndResult>(e));
            else
              cb(_client, ToResult<PaymentsFrontEndResult>(response));
        });
  }
}