#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> GetPerformanceV1SystemInfo(LeagueClient& _client, const std::optional<int32_t>& full = std::nullopt)
  {
    try {
      return ToResult<json>(_client.https.request("get", "/performance/v1/system-info?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "full", to_string(full) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void GetPerformanceV1SystemInfo(LeagueClient& _client, const std::optional<int32_t>& full = std::nullopt, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("get", "/performance/v1/system-info?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "full", to_string(full) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}