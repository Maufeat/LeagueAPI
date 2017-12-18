#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolEndOfGameEndOfGameStats.hpp"
namespace lol {
  inline Result<LolEndOfGameEndOfGameStats> GetLolEndOfGameV1EogStatsBlock(LeagueClient& _client)
  {
    try {
      return Result<LolEndOfGameEndOfGameStats> {
        _client.https.request("get", "/lol-end-of-game/v1/eog-stats-block?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolEndOfGameEndOfGameStats> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolEndOfGameV1EogStatsBlock(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolEndOfGameEndOfGameStats>&)> cb)
  {
    _client.httpsa.request("get", "/lol-end-of-game/v1/eog-stats-block?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolEndOfGameEndOfGameStats> { response });
          else
            cb(_client,Result<LolEndOfGameEndOfGameStats> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}