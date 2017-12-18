#pragma once
#include "../base_op.hpp" 
#include "../def/LolHonorV2FullTeamVote.hpp"
namespace lol {
  inline Result<LolHonorV2FullTeamVote> GetLolHonorV2V1FullTeamVote(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolHonorV2FullTeamVote> {
        _client_.request("get", "/lol-honor-v2/v1/full-team-vote?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolHonorV2FullTeamVote> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}