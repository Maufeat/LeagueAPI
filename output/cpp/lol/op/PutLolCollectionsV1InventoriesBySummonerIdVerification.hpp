#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::string> PutLolCollectionsV1InventoriesBySummonerIdVerification(LeagueClient& _client, const uint64_t& summonerId, const std::string& verificationCode)
  {
    try {
      return Result<std::string> {
        _client.https.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/verification?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(verificationCode).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::string> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PutLolCollectionsV1InventoriesBySummonerIdVerification(LeagueClient& _client, const uint64_t& summonerId, const std::string& verificationCode, std::function<void(LeagueClient&,const Result<std::string>&)> cb)
  {
    _client.httpsa.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/verification?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(verificationCode).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::string> { response });
          else
            cb(_client,Result<std::string> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}