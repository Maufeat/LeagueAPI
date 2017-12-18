#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<uint32_t> GetRiotclientUxCrashCount(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<uint32_t> {
        _client_.request("get", "/riotclient/ux-crash-count?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<uint32_t> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}