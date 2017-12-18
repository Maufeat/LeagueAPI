#pragma once
#include "../base_op.hpp" 
#include "../def/basicSystemInfo.hpp"
namespace lol {
  inline Result<basicSystemInfo> GetRiotclientSystemInfoV1BasicInfo(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<basicSystemInfo> {
        _client_.request("get", "/riotclient/system-info/v1/basic-info?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<basicSystemInfo> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}