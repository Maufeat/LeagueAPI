#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGameflowGameflowAvailability.hpp"
namespace lol {
  template<typename T>
  inline Result<LolGameflowGameflowAvailability> GetLolGameflowV1Availability(T& _client)
  {
    try {
      return ToResult<LolGameflowGameflowAvailability>(_client.https.request("get", "/lol-gameflow/v1/availability?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolGameflowGameflowAvailability>(e.code());
    }
  }
  template<typename T>
  inline void GetLolGameflowV1Availability(T& _client, std::function<void(T&, const Result<LolGameflowGameflowAvailability>&)> cb)
  {
    _client.httpsa.request("get", "/lol-gameflow/v1/availability?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolGameflowGameflowAvailability>(e));
            else
              cb(_client, ToResult<LolGameflowGameflowAvailability>(response));
        });
  }
}