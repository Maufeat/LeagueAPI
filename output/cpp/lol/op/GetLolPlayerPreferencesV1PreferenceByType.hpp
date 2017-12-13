#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetLolPlayerPreferencesV1PreferenceByType(const LeagueClient& _client, const std::string& type, const std::optional<std::string>& hash = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-player-preferences/v1/preference/"+to_string(type)+"?" + SimpleWeb::QueryString::create(Args2Headers({ { "hash", to_string(hash) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}