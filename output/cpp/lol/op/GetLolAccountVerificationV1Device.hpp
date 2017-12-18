#pragma once
#include "../base_op.hpp" 
#include "../def/LolAccountVerificationDeviceResponse.hpp"
namespace lol {
  inline Result<LolAccountVerificationDeviceResponse> GetLolAccountVerificationV1Device(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolAccountVerificationDeviceResponse> {
        _client_.request("get", "/lol-account-verification/v1/device?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolAccountVerificationDeviceResponse> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}