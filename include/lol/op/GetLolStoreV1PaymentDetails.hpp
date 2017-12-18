#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> GetLolStoreV1PaymentDetails(LeagueClient& _client, const std::string& action, const std::optional<uint64_t>& giftRecipientAccountId = std::nullopt, const std::optional<std::string>& giftMessage = std::nullopt)
  {
    try {
      return ToResult<json>(_client.https.request("get", "/lol-store/v1/paymentDetails?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "action", to_string(action) },
          { "giftRecipientAccountId", to_string(giftRecipientAccountId) },
          { "giftMessage", to_string(giftMessage) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void GetLolStoreV1PaymentDetails(LeagueClient& _client, const std::string& action, const std::optional<uint64_t>& giftRecipientAccountId = std::nullopt, const std::optional<std::string>& giftMessage = std::nullopt, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("get", "/lol-store/v1/paymentDetails?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "action", to_string(action) },
          { "giftRecipientAccountId", to_string(giftRecipientAccountId) },
          { "giftMessage", to_string(giftMessage) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}