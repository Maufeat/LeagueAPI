#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPftPFTSurvey.hpp"
namespace lol {
  template<typename T>
  inline Result<LolPftPFTSurvey> GetLolPftV2Survey(T& _client)
  {
    try {
      return ToResult<LolPftPFTSurvey>(_client.https.request("get", "/lol-pft/v2/survey?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolPftPFTSurvey>(e.code());
    }
  }
  template<typename T>
  inline void GetLolPftV2Survey(T& _client, std::function<void(T&, const Result<LolPftPFTSurvey>&)> cb)
  {
    _client.httpsa.request("get", "/lol-pft/v2/survey?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolPftPFTSurvey>(e));
            else
              cb(_client, ToResult<LolPftPFTSurvey>(response));
        });
  }
}