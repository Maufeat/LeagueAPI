#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<json> PutLolChatV1SettingsByKey(const LeagueClient& _client, const std::string& key, const json& value, const std::optional<bool>& doAsync = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("put", "/lol-chat/v1/settings/"+to_string(key)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "doAsync", to_string(doAsync) }, })), 
          json(value).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}