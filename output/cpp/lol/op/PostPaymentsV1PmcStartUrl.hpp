#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PaymentsFrontEndResult.hpp>
#include <lol/def/PaymentsFrontEndRequest.hpp>
namespace lol {
  Result<PaymentsFrontEndResult> PostPaymentsV1PmcStartUrl(const LeagueClient& _client, const PaymentsFrontEndRequest& options)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/payments/v1/pmc-start-url?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(options).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}