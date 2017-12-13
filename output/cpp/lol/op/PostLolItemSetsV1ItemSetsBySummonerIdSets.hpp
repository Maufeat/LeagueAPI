#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolItemSetsItemSet.hpp>
namespace lol {
  Result<void> PostLolItemSetsV1ItemSetsBySummonerIdSets(const LeagueClient& _client, const uint64_t& summonerId, const LolItemSetsItemSet& itemSet)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(itemSet).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}