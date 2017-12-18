#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LogEvent.hpp"
namespace lol {
  inline Result<std::vector<LogEvent>> LoggingGetEntries(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LogEvent>> {
        _client.https.request("post", "/LoggingGetEntries?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LogEvent>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void LoggingGetEntries(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LogEvent>>&)> cb)
  {
    _client.httpsa.request("post", "/LoggingGetEntries?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LogEvent>> { response });
          else
            cb(_client,Result<std::vector<LogEvent>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}