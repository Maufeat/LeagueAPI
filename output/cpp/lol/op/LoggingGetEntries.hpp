#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LogEvent.hpp>
namespace lol {
  inline Result<std::vector<LogEvent>> LoggingGetEntries(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LogEvent>> {
        _client_.request("post", "/LoggingGetEntries?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LogEvent>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}