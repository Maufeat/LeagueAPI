#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolKrShutdownLawQueueShutdownStatus.hpp"
namespace lol {
  inline Result<LolKrShutdownLawQueueShutdownStatus> GetLolKrShutdownLawV1CustomStatus(LeagueClient& _client)
  {
    try {
      return Result<LolKrShutdownLawQueueShutdownStatus> {
        _client.https.request("get", "/lol-kr-shutdown-law/v1/custom-status?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolKrShutdownLawQueueShutdownStatus> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolKrShutdownLawV1CustomStatus(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolKrShutdownLawQueueShutdownStatus>&)> cb)
  {
    _client.httpsa.request("get", "/lol-kr-shutdown-law/v1/custom-status?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolKrShutdownLawQueueShutdownStatus> { response });
          else
            cb(_client,Result<LolKrShutdownLawQueueShutdownStatus> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}