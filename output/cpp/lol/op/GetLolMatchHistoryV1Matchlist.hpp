#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryList.hpp>
namespace lol {
  Result<LolMatchHistoryMatchHistoryList> GetLolMatchHistoryV1Matchlist(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-match-history/v1/matchlist?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}