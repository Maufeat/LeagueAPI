#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> PutLolCollectionsV1InventoriesBySummonerIdVerification(const LeagueClient& _client, const uint64_t& summonerId, const std::string& verificationCode)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::string> {
        _client_.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/verification?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(verificationCode).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::string> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}