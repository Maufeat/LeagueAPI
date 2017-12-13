#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPftPFTSurvey.hpp>
namespace lol {
  Result<void> PostLolPftV2Survey(const LeagueClient& _client, const LolPftPFTSurvey& survey)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-pft/v2/survey?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(survey).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}