#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> DeleteLolPreEndOfGameV1RegistrationBySequenceEventName(const LeagueClient& _client, const std::string& sequenceEventName)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-pre-end-of-game/v1/registration/"+to_string(sequenceEventName)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}