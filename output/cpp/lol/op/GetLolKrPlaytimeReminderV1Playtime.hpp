#pragma once
#include "../base_op.hpp" 
#include "../def/PlaytimeReminder.hpp"
namespace lol {
  inline Result<PlaytimeReminder> GetLolKrPlaytimeReminderV1Playtime(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PlaytimeReminder> {
        _client_.request("get", "/lol-kr-playtime-reminder/v1/playtime?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlaytimeReminder> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}