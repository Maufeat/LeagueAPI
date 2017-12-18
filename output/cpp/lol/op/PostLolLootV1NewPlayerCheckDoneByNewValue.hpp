#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<std::string> PostLolLootV1NewPlayerCheckDoneByNewValue(const LeagueClient& _client, const bool& newValue)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::string> {
        _client_.request("post", "/lol-loot/v1/new-player-check-done/"+to_string(newValue)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::string> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}