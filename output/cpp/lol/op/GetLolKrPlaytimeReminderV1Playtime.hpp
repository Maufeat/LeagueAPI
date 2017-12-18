#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlaytimeReminder.hpp"
namespace lol {
  inline Result<PlaytimeReminder> GetLolKrPlaytimeReminderV1Playtime(LeagueClient& _client)
  {
    try {
      return Result<PlaytimeReminder> {
        _client.https.request("get", "/lol-kr-playtime-reminder/v1/playtime?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlaytimeReminder> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolKrPlaytimeReminderV1Playtime(LeagueClient& _client, std::function<void(LeagueClient&,const Result<PlaytimeReminder>&)> cb)
  {
    _client.httpsa.request("get", "/lol-kr-playtime-reminder/v1/playtime?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<PlaytimeReminder> { response });
          else
            cb(_client,Result<PlaytimeReminder> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}