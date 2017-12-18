#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPerksUISettings.hpp>
namespace lol {
  inline Result<LolPerksUISettings> GetLolPerksV1Settings(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolPerksUISettings> {
        _client_.request("get", "/lol-perks/v1/settings?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPerksUISettings> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}