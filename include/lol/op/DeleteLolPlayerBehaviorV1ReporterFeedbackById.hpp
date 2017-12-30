#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPlayerBehaviorReporterFeedback.hpp"
namespace lol {
  template<typename T>
  inline Result<LolPlayerBehaviorReporterFeedback> DeleteLolPlayerBehaviorV1ReporterFeedbackById(T& _client, const std::string& id)
  {
    try {
      return ToResult<LolPlayerBehaviorReporterFeedback>(_client.https.request("delete", "/lol-player-behavior/v1/reporter-feedback/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolPlayerBehaviorReporterFeedback>(e.code());
    }
  }
  template<typename T>
  inline void DeleteLolPlayerBehaviorV1ReporterFeedbackById(T& _client, const std::string& id, std::function<void(T&, const Result<LolPlayerBehaviorReporterFeedback>&)> cb)
  {
    _client.httpsa.request("delete", "/lol-player-behavior/v1/reporter-feedback/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolPlayerBehaviorReporterFeedback>(e));
            else
              cb(_client, ToResult<LolPlayerBehaviorReporterFeedback>(response));
        });
  }
}