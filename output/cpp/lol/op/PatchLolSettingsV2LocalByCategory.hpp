#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSettingsSettingCategory.hpp>
namespace lol {
  inline Result<json> PatchLolSettingsV2LocalByCategory(const LeagueClient& _client, const std::string& category, const LolSettingsSettingCategory& settingsResource)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("patch", "/lol-settings/v2/local/"+to_string(category)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(settingsResource).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}