#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashRosterStats.hpp>
namespace lol {
  Result<LolClashRosterStats> GetLolClashV1RosterByRosterIdStats(const LeagueClient& _client, const int64_t& rosterId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clash/v1/roster/"+to_string(rosterId)+"/stats?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}