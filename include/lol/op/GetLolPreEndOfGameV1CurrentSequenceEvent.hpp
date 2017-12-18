#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPreEndOfGameSequenceEvent.hpp"
namespace lol {
  inline Result<LolPreEndOfGameSequenceEvent> GetLolPreEndOfGameV1CurrentSequenceEvent(LeagueClient& _client)
  {
    try {
      return ToResult<LolPreEndOfGameSequenceEvent>(_client.https.request("get", "/lol-pre-end-of-game/v1/currentSequenceEvent?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolPreEndOfGameSequenceEvent>(e.code());
    }
  }
  inline void GetLolPreEndOfGameV1CurrentSequenceEvent(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolPreEndOfGameSequenceEvent>&)> cb)
  {
    _client.httpsa.request("get", "/lol-pre-end-of-game/v1/currentSequenceEvent?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolPreEndOfGameSequenceEvent>(e));
            else
              cb(_client, ToResult<LolPreEndOfGameSequenceEvent>(response));
        });
  }
}