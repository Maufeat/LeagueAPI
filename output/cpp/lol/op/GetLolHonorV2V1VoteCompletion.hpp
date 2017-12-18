#pragma once
#include "../base_op.hpp" 
#include "../def/LolHonorV2VoteCompletion.hpp"
namespace lol {
  inline Result<LolHonorV2VoteCompletion> GetLolHonorV2V1VoteCompletion(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolHonorV2VoteCompletion> {
        _client_.request("get", "/lol-honor-v2/v1/vote-completion?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolHonorV2VoteCompletion> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}