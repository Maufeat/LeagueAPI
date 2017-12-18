#pragma once
#include "../base_op.hpp" 
#include "../def/LolReplaysReplaysConfiguration.hpp"
namespace lol {
  inline Result<LolReplaysReplaysConfiguration> GetLolReplaysV1Configuration(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolReplaysReplaysConfiguration> {
        _client_.request("get", "/lol-replays/v1/configuration?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolReplaysReplaysConfiguration> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}