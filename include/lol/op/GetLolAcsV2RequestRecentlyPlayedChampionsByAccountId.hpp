#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> GetLolAcsV2RequestRecentlyPlayedChampionsByAccountId(LeagueClient& _client, const uint64_t& accountId, const bool& force)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("get", "/lol-acs/v2/request-recently-played-champions/"+to_string(accountId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "force", to_string(force) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void GetLolAcsV2RequestRecentlyPlayedChampionsByAccountId(LeagueClient& _client, const uint64_t& accountId, const bool& force, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("get", "/lol-acs/v2/request-recently-played-champions/"+to_string(accountId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "force", to_string(force) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}