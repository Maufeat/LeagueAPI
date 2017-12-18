#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> PostPerformanceV1ReportRestart(LeagueClient& _client, const std::optional<int32_t>& sampleLength = std::nullopt, const std::optional<int32_t>& sampleCount = std::nullopt)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/performance/v1/report/restart?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "sampleLength", to_string(sampleLength) },
          { "sampleCount", to_string(sampleCount) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void PostPerformanceV1ReportRestart(LeagueClient& _client, const std::optional<int32_t>& sampleLength = std::nullopt, const std::optional<int32_t>& sampleCount = std::nullopt, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/performance/v1/report/restart?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "sampleLength", to_string(sampleLength) },
          { "sampleCount", to_string(sampleCount) }, })), 
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