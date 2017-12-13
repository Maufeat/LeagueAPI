#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetLolSettingsV1AccountByCategory(const LeagueClient& _client, const std::string& category)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-settings/v1/account/"+to_string(category)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}