#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLeaguesLeaguesNotification.hpp>
namespace lol {
  Result<std::vector<LolLeaguesLeaguesNotification>> GetLolLeaguesV2Notifications(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLeaguesLeaguesNotification>> {
        _client_.request("get", "/lol-leagues/v2/notifications?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLeaguesLeaguesNotification>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}