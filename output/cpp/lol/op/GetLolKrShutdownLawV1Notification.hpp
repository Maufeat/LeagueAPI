#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolKrShutdownLawShutdownLawNotification.hpp"
namespace lol {
  inline Result<LolKrShutdownLawShutdownLawNotification> GetLolKrShutdownLawV1Notification(LeagueClient& _client)
  {
    try {
      return Result<LolKrShutdownLawShutdownLawNotification> {
        _client.https.request("get", "/lol-kr-shutdown-law/v1/notification?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolKrShutdownLawShutdownLawNotification> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolKrShutdownLawV1Notification(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolKrShutdownLawShutdownLawNotification>&)> cb)
  {
    _client.httpsa.request("get", "/lol-kr-shutdown-law/v1/notification?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolKrShutdownLawShutdownLawNotification> { response });
          else
            cb(_client,Result<LolKrShutdownLawShutdownLawNotification> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}