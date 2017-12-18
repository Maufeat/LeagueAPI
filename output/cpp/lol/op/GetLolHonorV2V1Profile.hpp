#pragma once
#include "../base_op.hpp" 
#include "../def/LolHonorV2ProfileInfo.hpp"
namespace lol {
  inline Result<LolHonorV2ProfileInfo> GetLolHonorV2V1Profile(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolHonorV2ProfileInfo> {
        _client_.request("get", "/lol-honor-v2/v1/profile?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolHonorV2ProfileInfo> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}