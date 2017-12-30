#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> PostLolPreEndOfGameV1RegistrationBySequenceEventNameByPriority(T& _client, const std::string& sequenceEventName, const int32_t& priority)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/lol-pre-end-of-game/v1/registration/"+to_string(sequenceEventName)+"/"+to_string(priority)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostLolPreEndOfGameV1RegistrationBySequenceEventNameByPriority(T& _client, const std::string& sequenceEventName, const int32_t& priority, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/lol-pre-end-of-game/v1/registration/"+to_string(sequenceEventName)+"/"+to_string(priority)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}