#pragma once
#include "../base_op.hpp" 
#include "../def/LolPerksPerkUIStyle.hpp"
namespace lol {
  inline Result<std::vector<LolPerksPerkUIStyle>> GetLolPerksV1Styles(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolPerksPerkUIStyle>> {
        _client_.request("get", "/lol-perks/v1/styles?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolPerksPerkUIStyle>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}