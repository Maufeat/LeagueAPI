#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolStoreV1NotificationsAcknowledge(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-store/v1/notifications/acknowledge?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(id).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}