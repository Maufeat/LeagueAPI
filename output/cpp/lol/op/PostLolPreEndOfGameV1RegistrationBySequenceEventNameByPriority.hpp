#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolPreEndOfGameV1RegistrationBySequenceEventNameByPriority(const LeagueClient& _client, const std::string& sequenceEventName, const int32_t& priority)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-pre-end-of-game/v1/registration/"+to_string(sequenceEventName)+"/"+to_string(priority)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}