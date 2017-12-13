#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolLeaguesV2NotificationsByIdAcknowledge(const LeagueClient& _client, const uint64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-leagues/v2/notifications/"+to_string(id)+"/acknowledge?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}