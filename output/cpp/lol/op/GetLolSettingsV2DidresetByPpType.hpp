#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<bool> GetLolSettingsV2DidresetByPpType(const LeagueClient& _client, const std::string& ppType)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-settings/v2/didreset/"+to_string(ppType)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}