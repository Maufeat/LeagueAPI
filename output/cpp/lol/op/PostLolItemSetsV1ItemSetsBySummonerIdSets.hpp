#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolItemSetsItemSet.hpp>
namespace lol {
  inline Result<void> PostLolItemSetsV1ItemSetsBySummonerIdSets(const LeagueClient& _client, const uint64_t& summonerId, const LolItemSetsItemSet& itemSet)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(itemSet).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}