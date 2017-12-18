#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<void> PostDataStoreV1InstallSettingsByPath(LeagueClient& _client, const std::string& path, const json& data)
  {
    try {
      return Result<void> {
        _client.https.request("post", "/data-store/v1/install-settings/"+to_string(path)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(data).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostDataStoreV1InstallSettingsByPath(LeagueClient& _client, const std::string& path, const json& data, std::function<void(LeagueClient&,const Result<void>&)> cb)
  {
    _client.httpsa.request("post", "/data-store/v1/install-settings/"+to_string(path)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(data).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<void> { response });
          else
            cb(_client,Result<void> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}