#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostTelemetryV1CommonDataByKey(const LeagueClient& _client, const std::string& key, const std::string& value)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/telemetry/v1/common-data/"+to_string(key)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(value).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}