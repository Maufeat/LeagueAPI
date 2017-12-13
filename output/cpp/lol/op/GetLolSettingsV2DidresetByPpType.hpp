#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<bool> GetLolSettingsV2DidresetByPpType(const LeagueClient& _client, const std::string& ppType)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<bool> {
        _client_.request("get", "/lol-settings/v2/didreset/"+to_string(ppType)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<bool> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}