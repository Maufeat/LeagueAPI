#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetLolChatV1SettingsByKey(const LeagueClient& _client, const std::string& key)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("get", "/lol-chat/v1/settings/"+to_string(key)+"?" +
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