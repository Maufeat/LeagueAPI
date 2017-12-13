#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolPreEndOfGameV1CompleteBySequenceEventName(const LeagueClient& _client, const std::string& sequenceEventName)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-pre-end-of-game/v1/complete/"+to_string(sequenceEventName)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}