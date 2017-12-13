#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LogEvent.hpp>
namespace lol {
  Result<std::vector<LogEvent>> LoggingGetEntries(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/LoggingGetEntries?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}