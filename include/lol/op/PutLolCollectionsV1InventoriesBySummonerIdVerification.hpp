#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<std::string> PutLolCollectionsV1InventoriesBySummonerIdVerification(T& _client, const uint64_t& summonerId, const std::string& verificationCode)
  {
    try {
      return ToResult<std::string>(_client.https.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/verification?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(verificationCode).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::string>(e.code());
    }
  }
  template<typename T>
  inline void PutLolCollectionsV1InventoriesBySummonerIdVerification(T& _client, const uint64_t& summonerId, const std::string& verificationCode, std::function<void(T&, const Result<std::string>&)> cb)
  {
    _client.httpsa.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/verification?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(verificationCode).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::string>(e));
            else
              cb(_client, ToResult<std::string>(response));
        });
  }
}