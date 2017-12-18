#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashRosterStats.hpp>
namespace lol {
  inline Result<std::vector<LolClashRosterStats>> GetLolClashV1PlayerHistory(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolClashRosterStats>> {
        _client_.request("get", "/lol-clash/v1/player/history?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolClashRosterStats>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}