#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> PutLolCollectionsV1InventoriesBySummonerIdVerification(const LeagueClient& _client, const uint64_t& summonerId, const std::string& verificationCode)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/verification?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(verificationCode).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}