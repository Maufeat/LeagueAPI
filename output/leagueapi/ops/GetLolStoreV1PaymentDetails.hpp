#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolStoreV1PaymentDetails (const https::Info& _info_,
      const std::string& action /**/ ,
      const std::optional<uint64_t>& giftRecipientAccountId = std::nullopt /**/,
      const std::optional<std::string>& giftMessage = std::nullopt /**/)
  { 
    return { https::Do(_info_, "get", "/lol-store/v1/paymentDetails?", { 
      { "action", https::to_string(action) },
      { "giftRecipientAccountId", https::to_string(giftRecipientAccountId) },
      { "giftMessage", https::to_string(giftMessage) },
    }, { 
    },"") };
  }
} 