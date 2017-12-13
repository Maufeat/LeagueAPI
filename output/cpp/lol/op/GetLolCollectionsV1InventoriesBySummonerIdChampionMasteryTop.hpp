#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolCollectionsCollectionsTopChampionMasteries.hpp>
namespace lol {
  Result<LolCollectionsCollectionsTopChampionMasteries> GetLolCollectionsV1InventoriesBySummonerIdChampionMasteryTop(const LeagueClient& _client, const uint64_t& summonerId, const uint64_t& limit, const std::optional<std::string>& sortRule = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolCollectionsCollectionsTopChampionMasteries> {
        _client_.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/champion-mastery/top?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "limit", to_string(limit) },
           { "sortRule", to_string(sortRule) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsTopChampionMasteries> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}