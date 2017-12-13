#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> GetLolEsportStreamNotificationsV1StreamUrl(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-esport-stream-notifications/v1/stream-url?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}