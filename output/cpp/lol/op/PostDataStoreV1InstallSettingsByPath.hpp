#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostDataStoreV1InstallSettingsByPath(const LeagueClient& _client, const std::string& path, const json& data)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/data-store/v1/install-settings/"+to_string(path)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(data).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}