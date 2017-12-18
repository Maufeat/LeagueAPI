#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolKrShutdownLawAllQueueShutdownStatus.hpp>
namespace lol {
  inline Result<LolKrShutdownLawAllQueueShutdownStatus> GetLolKrShutdownLawV1Status(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolKrShutdownLawAllQueueShutdownStatus> {
        _client_.request("get", "/lol-kr-shutdown-law/v1/status?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolKrShutdownLawAllQueueShutdownStatus> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}