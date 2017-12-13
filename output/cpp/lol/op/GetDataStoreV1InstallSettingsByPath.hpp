#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetDataStoreV1InstallSettingsByPath(const LeagueClient& _client, const std::string& path)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("get", "/data-store/v1/install-settings/"+to_string(path)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}