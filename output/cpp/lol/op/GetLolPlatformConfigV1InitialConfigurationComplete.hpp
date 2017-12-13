#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<bool> GetLolPlatformConfigV1InitialConfigurationComplete(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-platform-config/v1/initial-configuration-complete?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}