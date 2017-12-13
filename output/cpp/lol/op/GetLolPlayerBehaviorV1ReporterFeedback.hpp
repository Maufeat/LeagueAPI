#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPlayerBehaviorReporterFeedback.hpp>
namespace lol {
  Result<std::vector<LolPlayerBehaviorReporterFeedback>> GetLolPlayerBehaviorV1ReporterFeedback(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-player-behavior/v1/reporter-feedback?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}