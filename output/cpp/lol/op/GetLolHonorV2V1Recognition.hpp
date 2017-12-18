#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolHonorV2Honor.hpp>
namespace lol {
  inline Result<std::vector<LolHonorV2Honor>> GetLolHonorV2V1Recognition(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolHonorV2Honor>> {
        _client_.request("get", "/lol-honor-v2/v1/recognition?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolHonorV2Honor>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}