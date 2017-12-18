#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> PostRiotclientV1BugsplatLogs(LeagueClient& _client, const std::string& logFilePath)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/riotclient/v1/bugsplat/logs?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(logFilePath).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostRiotclientV1BugsplatLogs(LeagueClient& _client, const std::string& logFilePath, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/riotclient/v1/bugsplat/logs?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(logFilePath).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}