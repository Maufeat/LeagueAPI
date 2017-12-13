#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolHonorV2VoteCompletion.hpp>
namespace lol {
  Result<LolHonorV2VoteCompletion> GetLolHonorV2V1VoteCompletion(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-honor-v2/v1/vote-completion?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}