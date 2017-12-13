#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PutPatcherV1SelfUpdateRestart(const LeagueClient& _client, const bool& forceRestartOnSelfUpdate)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("put", "/patcher/v1/self-update-restart?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "forceRestartOnSelfUpdate", to_string(forceRestartOnSelfUpdate) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}