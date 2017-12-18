#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<std::vector<uint64_t>> GetLolHonorV2V1TeamChoices(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<uint64_t>> {
        _client_.request("get", "/lol-honor-v2/v1/team-choices?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<uint64_t>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}