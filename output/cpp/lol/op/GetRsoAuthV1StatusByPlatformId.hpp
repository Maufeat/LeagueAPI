#pragma once
#include "../base_op.hpp" 
#include "../def/RsoAuthRegionStatus.hpp"
namespace lol {
  inline Result<RsoAuthRegionStatus> GetRsoAuthV1StatusByPlatformId(const LeagueClient& _client, const std::string& platformId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RsoAuthRegionStatus> {
        _client_.request("get", "/rso-auth/v1/status/"+to_string(platformId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RsoAuthRegionStatus> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}