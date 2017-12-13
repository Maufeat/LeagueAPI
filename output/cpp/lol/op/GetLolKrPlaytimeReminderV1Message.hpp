#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> GetLolKrPlaytimeReminderV1Message(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-kr-playtime-reminder/v1/message?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}