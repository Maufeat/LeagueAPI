#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> GetPatcherV1ExecutableVersion(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/patcher/v1/executable-version?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}