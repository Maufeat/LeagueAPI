#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LogEvent.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LogEvent>> LoggingGetEntries(T& _client)
  {
    try {
      return ToResult<std::vector<LogEvent>>(_client.https.request("post", "/LoggingGetEntries?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LogEvent>>(e.code());
    }
  }
  template<typename T>
  inline void LoggingGetEntries(T& _client, std::function<void(T&, const Result<std::vector<LogEvent>>&)> cb)
  {
    _client.httpsa.request("post", "/LoggingGetEntries?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LogEvent>>(e));
            else
              cb(_client, ToResult<std::vector<LogEvent>>(response));
        });
  }
}