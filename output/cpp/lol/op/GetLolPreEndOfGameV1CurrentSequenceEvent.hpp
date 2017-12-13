#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPreEndOfGameSequenceEvent.hpp>
namespace lol {
  Result<LolPreEndOfGameSequenceEvent> GetLolPreEndOfGameV1CurrentSequenceEvent(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-pre-end-of-game/v1/currentSequenceEvent?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}