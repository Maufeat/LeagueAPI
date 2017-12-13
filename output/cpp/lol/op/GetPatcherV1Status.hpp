#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PatcherStatus.hpp>
namespace lol {
  Result<PatcherStatus> GetPatcherV1Status(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PatcherStatus> {
        _client_.request("get", "/patcher/v1/status?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PatcherStatus> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}