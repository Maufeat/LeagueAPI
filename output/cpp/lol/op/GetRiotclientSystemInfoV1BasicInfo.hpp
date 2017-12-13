#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/basicSystemInfo.hpp>
namespace lol {
  Result<basicSystemInfo> GetRiotclientSystemInfoV1BasicInfo(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/riotclient/system-info/v1/basic-info?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}