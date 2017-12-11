#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PaymentsFrontEndRequest.hpp>
#include <leagueapi/definitions/PaymentsFrontEndResult.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PaymentsFrontEndResult> PostPaymentsV1PmcStartUrl (const https::Info& _info_,
      const PaymentsFrontEndRequest& options /**/ )
  { 
    return { https::Do(_info_, "post", "/payments/v1/pmc-start-url?", { 
    }, { 
    },options) };
  }
} 