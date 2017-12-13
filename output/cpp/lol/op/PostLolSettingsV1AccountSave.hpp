#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolSettingsV1AccountSave(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-settings/v1/account/save?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}