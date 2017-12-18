#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolHonorV2Ballot.hpp>
namespace lol {
  inline Result<LolHonorV2Ballot> GetLolHonorV2V1Ballot(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolHonorV2Ballot> {
        _client_.request("get", "/lol-honor-v2/v1/ballot?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolHonorV2Ballot> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}