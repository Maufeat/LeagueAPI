#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashPlayerRewards.hpp"
namespace lol {
  inline Result<LolClashPlayerRewards> GetLolClashV1Rewards(LeagueClient& _client)
  {
    try {
      return Result<LolClashPlayerRewards> {
        _client.https.request("get", "/lol-clash/v1/rewards?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashPlayerRewards> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClashV1Rewards(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolClashPlayerRewards>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/rewards?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolClashPlayerRewards> { response });
          else
            cb(_client,Result<LolClashPlayerRewards> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}