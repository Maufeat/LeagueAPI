#pragma once
#include "../base_op.hpp" 
#include "../def/PatcherStatus.hpp"
namespace lol {
  inline Result<PatcherStatus> GetPatcherV1Status(const LeagueClient& _client)
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