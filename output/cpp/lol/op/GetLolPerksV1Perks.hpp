#pragma once
#include "../base_op.hpp" 
#include "../def/LolPerksPerkUIPerk.hpp"
namespace lol {
  inline Result<std::vector<LolPerksPerkUIPerk>> GetLolPerksV1Perks(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolPerksPerkUIPerk>> {
        _client_.request("get", "/lol-perks/v1/perks?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolPerksPerkUIPerk>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}