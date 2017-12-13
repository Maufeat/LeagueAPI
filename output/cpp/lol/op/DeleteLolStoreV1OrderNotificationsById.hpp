#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteLolStoreV1OrderNotificationsById(const LeagueClient& _client, const uint64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("delete", "/lol-store/v1/order-notifications/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}