#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMatchHistoryRecentlyPlayedSummoner.hpp>
namespace lol {
  Result<std::vector<LolMatchHistoryRecentlyPlayedSummoner>> GetLolMatchHistoryV1RecentlyPlayedSummoners(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-match-history/v1/recently-played-summoners?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}