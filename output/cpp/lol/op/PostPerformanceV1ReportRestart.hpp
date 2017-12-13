#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostPerformanceV1ReportRestart(const LeagueClient& _client, const std::optional<int32_t>& sampleLength = std::nullopt, const std::optional<int32_t>& sampleCount = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/performance/v1/report/restart?" + SimpleWeb::QueryString::create(Args2Headers({ { "sampleLength", to_string(sampleLength) },
    { "sampleCount", to_string(sampleCount) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}