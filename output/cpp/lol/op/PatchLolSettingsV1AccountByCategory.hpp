#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSettingsSettingCategory.hpp"
namespace lol {
  inline Result<json> PatchLolSettingsV1AccountByCategory(LeagueClient& _client, const std::string& category, const LolSettingsSettingCategory& settingsResource)
  {
    try {
      return Result<json> {
        _client.https.request("patch", "/lol-settings/v1/account/"+to_string(category)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(settingsResource).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PatchLolSettingsV1AccountByCategory(LeagueClient& _client, const std::string& category, const LolSettingsSettingCategory& settingsResource, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("patch", "/lol-settings/v1/account/"+to_string(category)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(settingsResource).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}