#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolKrShutdownLawShutdownLawNotification.hpp"
namespace lol {
  template<typename T>
  inline Result<LolKrShutdownLawShutdownLawNotification> GetLolKrShutdownLawV1Notification(T& _client)
  {
    try {
      return ToResult<LolKrShutdownLawShutdownLawNotification>(_client.https.request("get", "/lol-kr-shutdown-law/v1/notification?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolKrShutdownLawShutdownLawNotification>(e.code());
    }
  }
  template<typename T>
  inline void GetLolKrShutdownLawV1Notification(T& _client, std::function<void(T&, const Result<LolKrShutdownLawShutdownLawNotification>&)> cb)
  {
    _client.httpsa.request("get", "/lol-kr-shutdown-law/v1/notification?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolKrShutdownLawShutdownLawNotification>(e));
            else
              cb(_client, ToResult<LolKrShutdownLawShutdownLawNotification>(response));
        });
  }
}