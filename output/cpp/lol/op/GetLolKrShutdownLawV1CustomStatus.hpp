#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolKrShutdownLawQueueShutdownStatus.hpp>
namespace lol {
  Result<LolKrShutdownLawQueueShutdownStatus> GetLolKrShutdownLawV1CustomStatus(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolKrShutdownLawQueueShutdownStatus> {
        _client_.request("get", "/lol-kr-shutdown-law/v1/custom-status?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolKrShutdownLawQueueShutdownStatus> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}