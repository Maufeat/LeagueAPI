#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<void> PostTelemetryV1CommonDataByKey(const LeagueClient& _client, const std::string& key, const std::string& value)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/telemetry/v1/common-data/"+to_string(key)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(value).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}