#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolStoreV1NotificationsAcknowledge(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-store/v1/notifications/acknowledge?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(id).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}