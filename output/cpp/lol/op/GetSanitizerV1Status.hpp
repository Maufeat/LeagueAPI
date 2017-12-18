#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/SanitizerSanitizerStatus.hpp>
namespace lol {
  inline Result<SanitizerSanitizerStatus> GetSanitizerV1Status(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<SanitizerSanitizerStatus> {
        _client_.request("get", "/sanitizer/v1/status?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<SanitizerSanitizerStatus> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}