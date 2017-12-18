#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolHonorV2FullTeamVote.hpp"
namespace lol {
  inline Result<LolHonorV2FullTeamVote> GetLolHonorV2V1FullTeamVote(LeagueClient& _client)
  {
    try {
      return ToResult<LolHonorV2FullTeamVote>(_client.https.request("get", "/lol-honor-v2/v1/full-team-vote?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolHonorV2FullTeamVote>(e.code());
    }
  }
  inline void GetLolHonorV2V1FullTeamVote(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolHonorV2FullTeamVote>&)> cb)
  {
    _client.httpsa.request("get", "/lol-honor-v2/v1/full-team-vote?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolHonorV2FullTeamVote>(e));
            else
              cb(_client, ToResult<LolHonorV2FullTeamVote>(response));
        });
  }
}