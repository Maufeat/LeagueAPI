#pragma once
#include "../base_op.hpp" 
#include "../def/LolKrShutdownLawShutdownLawNotification.hpp"
namespace lol {
  inline Result<LolKrShutdownLawShutdownLawNotification> GetLolKrShutdownLawV1Notification(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolKrShutdownLawShutdownLawNotification> {
        _client_.request("get", "/lol-kr-shutdown-law/v1/notification?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolKrShutdownLawShutdownLawNotification> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}