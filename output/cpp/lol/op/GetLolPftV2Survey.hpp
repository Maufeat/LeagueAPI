#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPftPFTSurvey.hpp>
namespace lol {
  Result<LolPftPFTSurvey> GetLolPftV2Survey(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolPftPFTSurvey> {
        _client_.request("get", "/lol-pft/v2/survey?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPftPFTSurvey> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}