#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolAccountVerificationDeviceResponse.hpp>
namespace lol {
  Result<LolAccountVerificationDeviceResponse> GetLolAccountVerificationV1Device(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-account-verification/v1/device?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}