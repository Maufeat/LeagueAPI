#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> GetLolCollectionsV1InventoriesBySummonerIdVerification(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::string> {
        _client_.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/verification?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::string> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}