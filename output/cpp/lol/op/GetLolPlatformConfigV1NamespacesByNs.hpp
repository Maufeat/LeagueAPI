#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetLolPlatformConfigV1NamespacesByNs(const LeagueClient& _client, const std::string& ns)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("get", "/lol-platform-config/v1/namespaces/"+to_string(ns)+"?" +
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