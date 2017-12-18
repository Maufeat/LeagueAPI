#pragma once
#include "../base_op.hpp" 
#include "../def/LolMatchHistoryMatchHistoryPlayerDelta.hpp"
namespace lol {
  inline Result<LolMatchHistoryMatchHistoryPlayerDelta> GetLolMatchHistoryV1Delta(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolMatchHistoryMatchHistoryPlayerDelta> {
        _client_.request("get", "/lol-match-history/v1/delta?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolMatchHistoryMatchHistoryPlayerDelta> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}