#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPlayerBehaviorReporterFeedback.hpp"
namespace lol {
  inline Result<std::vector<LolPlayerBehaviorReporterFeedback>> GetLolPlayerBehaviorV1ReporterFeedback(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolPlayerBehaviorReporterFeedback>> {
        _client.https.request("get", "/lol-player-behavior/v1/reporter-feedback?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolPlayerBehaviorReporterFeedback>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolPlayerBehaviorV1ReporterFeedback(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolPlayerBehaviorReporterFeedback>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-player-behavior/v1/reporter-feedback?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolPlayerBehaviorReporterFeedback>> { response });
          else
            cb(_client,Result<std::vector<LolPlayerBehaviorReporterFeedback>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}