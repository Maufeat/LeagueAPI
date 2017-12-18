#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<void> GetLolAcsV2RequestRecentlyPlayedChampionsByAccountId(LeagueClient& _client, const uint64_t& accountId, const bool& force)
  {
    try {
      return Result<void> {
        _client.https.request("get", "/lol-acs/v2/request-recently-played-champions/"+to_string(accountId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "force", to_string(force) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolAcsV2RequestRecentlyPlayedChampionsByAccountId(LeagueClient& _client, const uint64_t& accountId, const bool& force, std::function<void(LeagueClient&,const Result<void>&)> cb)
  {
    _client.httpsa.request("get", "/lol-acs/v2/request-recently-played-champions/"+to_string(accountId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "force", to_string(force) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<void> { response });
          else
            cb(_client,Result<void> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}