#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolEndOfGameEndOfGameStats.hpp"
namespace lol {
  template<typename T>
  inline Result<LolEndOfGameEndOfGameStats> GetLolEndOfGameV1EogStatsBlock(T& _client)
  {
    try {
      return ToResult<LolEndOfGameEndOfGameStats>(_client.https.request("get", "/lol-end-of-game/v1/eog-stats-block?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolEndOfGameEndOfGameStats>(e.code());
    }
  }
  template<typename T>
  inline void GetLolEndOfGameV1EogStatsBlock(T& _client, std::function<void(T&, const Result<LolEndOfGameEndOfGameStats>&)> cb)
  {
    _client.httpsa.request("get", "/lol-end-of-game/v1/eog-stats-block?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolEndOfGameEndOfGameStats>(e));
            else
              cb(_client, ToResult<LolEndOfGameEndOfGameStats>(response));
        });
  }
}