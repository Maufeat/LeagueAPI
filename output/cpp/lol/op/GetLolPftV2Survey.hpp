#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPftPFTSurvey.hpp>
namespace lol {
  Result<LolPftPFTSurvey> GetLolPftV2Survey(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-pft/v2/survey?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}