#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<void> DeleteLolPreEndOfGameV1RegistrationBySequenceEventName(LeagueClient& _client, const std::string& sequenceEventName)
  {
    try {
      return Result<void> {
        _client.https.request("delete", "/lol-pre-end-of-game/v1/registration/"+to_string(sequenceEventName)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void DeleteLolPreEndOfGameV1RegistrationBySequenceEventName(LeagueClient& _client, const std::string& sequenceEventName, std::function<void(LeagueClient&,const Result<void>&)> cb)
  {
    _client.httpsa.request("delete", "/lol-pre-end-of-game/v1/registration/"+to_string(sequenceEventName)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<void> { response });
          else
            cb(_client,Result<void> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}