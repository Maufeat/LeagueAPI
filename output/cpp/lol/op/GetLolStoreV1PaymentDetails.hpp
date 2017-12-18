#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> GetLolStoreV1PaymentDetails(LeagueClient& _client, const std::string& action, const std::optional<uint64_t>& giftRecipientAccountId = std::nullopt, const std::optional<std::string>& giftMessage = std::nullopt)
  {
    try {
      return Result<json> {
        _client.https.request("get", "/lol-store/v1/paymentDetails?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "action", to_string(action) },
           { "giftRecipientAccountId", to_string(giftRecipientAccountId) },
           { "giftMessage", to_string(giftMessage) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolStoreV1PaymentDetails(LeagueClient& _client, const std::string& action, const std::optional<uint64_t>& giftRecipientAccountId = std::nullopt, const std::optional<std::string>& giftMessage = std::nullopt, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("get", "/lol-store/v1/paymentDetails?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "action", to_string(action) },
           { "giftRecipientAccountId", to_string(giftRecipientAccountId) },
           { "giftMessage", to_string(giftMessage) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}