#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PutLolChatV1SettingsByKey(const LeagueClient& _client, const std::string& key, const json& value, const std::optional<bool>& doAsync = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-chat/v1/settings/"+to_string(key)+"?" + SimpleWeb::QueryString::create(Args2Headers({ { "doAsync", to_string(doAsync) } })), json(value).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}