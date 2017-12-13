#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPftPFTSurvey.hpp>
namespace lol {
  Result<void> PostLolPftV2Survey(const LeagueClient& _client, const LolPftPFTSurvey& survey)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-pft/v2/survey?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(survey).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}