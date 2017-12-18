#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLeaguesLeaguesNotification.hpp"
namespace lol {
  inline Result<std::vector<LolLeaguesLeaguesNotification>> GetLolLeaguesV2Notifications(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolLeaguesLeaguesNotification>> {
        _client.https.request("get", "/lol-leagues/v2/notifications?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLeaguesLeaguesNotification>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLeaguesV2Notifications(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolLeaguesLeaguesNotification>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-leagues/v2/notifications?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolLeaguesLeaguesNotification>> { response });
          else
            cb(_client,Result<std::vector<LolLeaguesLeaguesNotification>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}