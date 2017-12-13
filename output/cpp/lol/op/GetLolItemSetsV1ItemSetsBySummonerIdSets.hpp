#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolItemSetsItemSets.hpp>
namespace lol {
  Result<LolItemSetsItemSets> GetLolItemSetsV1ItemSetsBySummonerIdSets(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}