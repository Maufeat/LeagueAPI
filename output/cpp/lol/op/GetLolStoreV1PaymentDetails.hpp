#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetLolStoreV1PaymentDetails(const LeagueClient& _client, const std::string& action, const std::optional<uint64_t>& giftRecipientAccountId = std::nullopt, const std::optional<std::string>& giftMessage = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-store/v1/paymentDetails?" + SimpleWeb::QueryString::create(Args2Headers({ { "action", to_string(action) },
    { "giftRecipientAccountId", to_string(giftRecipientAccountId) },
    { "giftMessage", to_string(giftMessage) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}