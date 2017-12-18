#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSettingsSettingCategory.hpp"
namespace lol {
  inline Result<json> PatchLolSettingsV1LocalByCategory(LeagueClient& _client, const std::string& category, const LolSettingsSettingCategory& settingsResource)
  {
    try {
      return ToResult<json>(_client.https.request("patch", "/lol-settings/v1/local/"+to_string(category)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(settingsResource).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void PatchLolSettingsV1LocalByCategory(LeagueClient& _client, const std::string& category, const LolSettingsSettingCategory& settingsResource, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("patch", "/lol-settings/v1/local/"+to_string(category)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(settingsResource).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}