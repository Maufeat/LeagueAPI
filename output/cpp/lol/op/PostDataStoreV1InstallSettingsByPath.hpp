#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<void> PostDataStoreV1InstallSettingsByPath(const LeagueClient& _client, const std::string& path, const json& data)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/data-store/v1/install-settings/"+to_string(path)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(data).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}