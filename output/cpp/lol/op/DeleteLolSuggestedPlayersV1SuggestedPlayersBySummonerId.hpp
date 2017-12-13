#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteLolSuggestedPlayersV1SuggestedPlayersBySummonerId(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-suggested-players/v1/suggested-players/"+to_string(summonerId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}