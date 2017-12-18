#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> PostProcessControlV1ProcessRestart(LeagueClient& _client, const uint32_t& delaySeconds, const std::optional<uint32_t>& restartVersion = std::nullopt)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/process-control/v1/process/restart?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "delaySeconds", to_string(delaySeconds) },
          { "restartVersion", to_string(restartVersion) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostProcessControlV1ProcessRestart(LeagueClient& _client, const uint32_t& delaySeconds, const std::optional<uint32_t>& restartVersion = std::nullopt, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/process-control/v1/process/restart?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "delaySeconds", to_string(delaySeconds) },
          { "restartVersion", to_string(restartVersion) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}