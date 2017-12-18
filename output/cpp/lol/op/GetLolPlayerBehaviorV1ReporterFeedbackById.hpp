#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPlayerBehaviorReporterFeedback.hpp"
namespace lol {
  inline Result<LolPlayerBehaviorReporterFeedback> GetLolPlayerBehaviorV1ReporterFeedbackById(LeagueClient& _client, const std::string& id)
  {
    try {
      return Result<LolPlayerBehaviorReporterFeedback> {
        _client.https.request("get", "/lol-player-behavior/v1/reporter-feedback/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPlayerBehaviorReporterFeedback> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolPlayerBehaviorV1ReporterFeedbackById(LeagueClient& _client, const std::string& id, std::function<void(LeagueClient&,const Result<LolPlayerBehaviorReporterFeedback>&)> cb)
  {
    _client.httpsa.request("get", "/lol-player-behavior/v1/reporter-feedback/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolPlayerBehaviorReporterFeedback> { response });
          else
            cb(_client,Result<LolPlayerBehaviorReporterFeedback> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}