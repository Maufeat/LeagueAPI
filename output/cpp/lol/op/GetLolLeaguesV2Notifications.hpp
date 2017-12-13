#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLeaguesLeaguesNotification.hpp>
namespace lol {
  Result<std::vector<LolLeaguesLeaguesNotification>> GetLolLeaguesV2Notifications(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-leagues/v2/notifications?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}