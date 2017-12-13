#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolEsportStreamNotificationsV1SendStats(const LeagueClient& _client, const std::string& eventType, const std::string& matchId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-esport-stream-notifications/v1/send-stats?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}