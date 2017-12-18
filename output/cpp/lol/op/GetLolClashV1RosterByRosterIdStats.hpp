#pragma once
#include "../base_op.hpp" 
#include "../def/LolClashRosterStats.hpp"
namespace lol {
  inline Result<LolClashRosterStats> GetLolClashV1RosterByRosterIdStats(const LeagueClient& _client, const int64_t& rosterId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolClashRosterStats> {
        _client_.request("get", "/lol-clash/v1/roster/"+to_string(rosterId)+"/stats?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashRosterStats> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}