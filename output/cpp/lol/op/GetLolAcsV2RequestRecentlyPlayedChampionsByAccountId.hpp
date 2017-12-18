#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<void> GetLolAcsV2RequestRecentlyPlayedChampionsByAccountId(const LeagueClient& _client, const uint64_t& accountId, const bool& force)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("get", "/lol-acs/v2/request-recently-played-champions/"+to_string(accountId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "force", to_string(force) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}