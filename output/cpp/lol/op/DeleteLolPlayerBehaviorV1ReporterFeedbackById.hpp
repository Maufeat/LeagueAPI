#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPlayerBehaviorReporterFeedback.hpp>
namespace lol {
  Result<LolPlayerBehaviorReporterFeedback> DeleteLolPlayerBehaviorV1ReporterFeedbackById(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-player-behavior/v1/reporter-feedback/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}