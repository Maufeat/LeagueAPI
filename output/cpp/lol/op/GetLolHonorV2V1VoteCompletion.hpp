#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolHonorV2VoteCompletion.hpp"
namespace lol {
  inline Result<LolHonorV2VoteCompletion> GetLolHonorV2V1VoteCompletion(LeagueClient& _client)
  {
    try {
      return Result<LolHonorV2VoteCompletion> {
        _client.https.request("get", "/lol-honor-v2/v1/vote-completion?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolHonorV2VoteCompletion> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolHonorV2V1VoteCompletion(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolHonorV2VoteCompletion>&)> cb)
  {
    _client.httpsa.request("get", "/lol-honor-v2/v1/vote-completion?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolHonorV2VoteCompletion> { response });
          else
            cb(_client,Result<LolHonorV2VoteCompletion> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}