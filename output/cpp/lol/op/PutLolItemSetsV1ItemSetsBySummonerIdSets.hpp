#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolItemSetsItemSets.hpp>
namespace lol {
  Result<void> PutLolItemSetsV1ItemSetsBySummonerIdSets(const LeagueClient& _client, const uint64_t& summonerId, const LolItemSetsItemSets& itemSets)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(itemSets).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}