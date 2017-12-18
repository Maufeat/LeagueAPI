#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> PostPerformanceV1ReportRestart(LeagueClient& _client, const std::optional<int32_t>& sampleLength = std::nullopt, const std::optional<int32_t>& sampleCount = std::nullopt)
  {
    try {
      return Result<json> {
        _client.https.request("post", "/performance/v1/report/restart?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "sampleLength", to_string(sampleLength) },
           { "sampleCount", to_string(sampleCount) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostPerformanceV1ReportRestart(LeagueClient& _client, const std::optional<int32_t>& sampleLength = std::nullopt, const std::optional<int32_t>& sampleCount = std::nullopt, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/performance/v1/report/restart?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "sampleLength", to_string(sampleLength) },
           { "sampleCount", to_string(sampleCount) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}