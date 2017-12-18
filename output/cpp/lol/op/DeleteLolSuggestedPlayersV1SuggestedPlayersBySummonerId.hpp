#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<json> DeleteLolSuggestedPlayersV1SuggestedPlayersBySummonerId(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("delete", "/lol-suggested-players/v1/suggested-players/"+to_string(summonerId)+"?" +
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