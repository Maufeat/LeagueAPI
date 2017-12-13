#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteLolPlayerMessagingV1CelebrationNotificationByIdAcknowledge(const LeagueClient& _client, const uint32_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-player-messaging/v1/celebration/notification/"+to_string(id)+"/acknowledge?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}