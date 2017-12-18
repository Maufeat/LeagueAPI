#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> PostLolStoreV1NotificationsAcknowledge(LeagueClient& _client, const std::string& id)
  {
    try {
      return Result<json> {
        _client.https.request("post", "/lol-store/v1/notifications/acknowledge?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(id).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolStoreV1NotificationsAcknowledge(LeagueClient& _client, const std::string& id, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-store/v1/notifications/acknowledge?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(id).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}