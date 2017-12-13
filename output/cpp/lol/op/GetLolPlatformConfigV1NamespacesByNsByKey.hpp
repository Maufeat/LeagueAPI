#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetLolPlatformConfigV1NamespacesByNsByKey(const LeagueClient& _client, const std::string& ns, const std::string& key)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-platform-config/v1/namespaces/"+to_string(ns)+"/"+to_string(key)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}