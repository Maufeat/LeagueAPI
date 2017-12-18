#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<void> PostLolReplaysV1RoflsScan(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-replays/v1/rofls/scan?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}