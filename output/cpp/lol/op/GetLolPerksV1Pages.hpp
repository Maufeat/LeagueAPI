#pragma once
#include "../base_op.hpp" 
#include "../def/LolPerksPerkPageResource.hpp"
namespace lol {
  inline Result<std::vector<LolPerksPerkPageResource>> GetLolPerksV1Pages(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolPerksPerkPageResource>> {
        _client_.request("get", "/lol-perks/v1/pages?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolPerksPerkPageResource>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}