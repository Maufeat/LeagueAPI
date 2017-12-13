#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolKrShutdownLawShutdownLawNotification.hpp>
namespace lol {
  Result<LolKrShutdownLawShutdownLawNotification> GetLolKrShutdownLawV1Notification(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-kr-shutdown-law/v1/notification?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}