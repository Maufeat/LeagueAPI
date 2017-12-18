#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPreEndOfGameSequenceEvent.hpp>
namespace lol {
  inline Result<LolPreEndOfGameSequenceEvent> GetLolPreEndOfGameV1CurrentSequenceEvent(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolPreEndOfGameSequenceEvent> {
        _client_.request("get", "/lol-pre-end-of-game/v1/currentSequenceEvent?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPreEndOfGameSequenceEvent> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}