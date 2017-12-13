#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryList.hpp>
namespace lol {
  Result<LolMatchHistoryMatchHistoryList> GetLolMatchHistoryV1Matchlist(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolMatchHistoryMatchHistoryList> {
        _client_.request("get", "/lol-match-history/v1/matchlist?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolMatchHistoryMatchHistoryList> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}