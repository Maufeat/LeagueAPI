#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolItemSetsItemSets.hpp>
namespace lol {
  Result<LolItemSetsItemSets> GetLolItemSetsV1ItemSetsBySummonerIdSets(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolItemSetsItemSets> {
        _client_.request("get", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolItemSetsItemSets> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}