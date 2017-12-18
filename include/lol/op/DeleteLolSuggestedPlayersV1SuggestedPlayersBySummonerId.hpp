#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> DeleteLolSuggestedPlayersV1SuggestedPlayersBySummonerId(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return ToResult<json>(_client.https.request("delete", "/lol-suggested-players/v1/suggested-players/"+to_string(summonerId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void DeleteLolSuggestedPlayersV1SuggestedPlayersBySummonerId(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("delete", "/lol-suggested-players/v1/suggested-players/"+to_string(summonerId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}