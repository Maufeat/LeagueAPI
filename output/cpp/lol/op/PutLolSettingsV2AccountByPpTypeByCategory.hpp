#pragma once
#include "../base_op.hpp" 
#include "../def/LolSettingsSettingCategory.hpp"
namespace lol {
  inline Result<json> PutLolSettingsV2AccountByPpTypeByCategory(const LeagueClient& _client, const std::string& ppType, const std::string& category, const LolSettingsSettingCategory& settingsResource)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("put", "/lol-settings/v2/account/"+to_string(ppType)+"/"+to_string(category)+"?" +
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