#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<json> GetLolPlatformConfigV1NamespacesByNsByKey(const LeagueClient& _client, const std::string& ns, const std::string& key)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("get", "/lol-platform-config/v1/namespaces/"+to_string(ns)+"/"+to_string(key)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}