#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPreEndOfGameSequenceEvent.hpp"
namespace lol {
  inline Result<LolPreEndOfGameSequenceEvent> GetLolPreEndOfGameV1CurrentSequenceEvent(LeagueClient& _client)
  {
    try {
      return Result<LolPreEndOfGameSequenceEvent> {
        _client.https.request("get", "/lol-pre-end-of-game/v1/currentSequenceEvent?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPreEndOfGameSequenceEvent> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolPreEndOfGameV1CurrentSequenceEvent(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolPreEndOfGameSequenceEvent>&)> cb)
  {
    _client.httpsa.request("get", "/lol-pre-end-of-game/v1/currentSequenceEvent?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolPreEndOfGameSequenceEvent> { response });
          else
            cb(_client,Result<LolPreEndOfGameSequenceEvent> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}