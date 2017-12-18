#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolHonorV2VendedHonorChange.hpp>
namespace lol {
  inline Result<LolHonorV2VendedHonorChange> GetLolHonorV2V1LevelChange(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolHonorV2VendedHonorChange> {
        _client_.request("get", "/lol-honor-v2/v1/level-change?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolHonorV2VendedHonorChange> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}