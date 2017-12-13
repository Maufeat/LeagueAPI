#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetDataStoreV1SystemSettingsByPath(const LeagueClient& _client, const std::string& path)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/data-store/v1/system-settings/"+to_string(path)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}