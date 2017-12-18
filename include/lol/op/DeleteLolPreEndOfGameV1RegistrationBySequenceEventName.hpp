#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> DeleteLolPreEndOfGameV1RegistrationBySequenceEventName(LeagueClient& _client, const std::string& sequenceEventName)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("delete", "/lol-pre-end-of-game/v1/registration/"+to_string(sequenceEventName)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void DeleteLolPreEndOfGameV1RegistrationBySequenceEventName(LeagueClient& _client, const std::string& sequenceEventName, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("delete", "/lol-pre-end-of-game/v1/registration/"+to_string(sequenceEventName)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}