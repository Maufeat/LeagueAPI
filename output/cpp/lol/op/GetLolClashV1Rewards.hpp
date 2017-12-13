#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashPlayerRewards.hpp>
namespace lol {
  Result<LolClashPlayerRewards> GetLolClashV1Rewards(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolClashPlayerRewards> {
        _client_.request("get", "/lol-clash/v1/rewards?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashPlayerRewards> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}