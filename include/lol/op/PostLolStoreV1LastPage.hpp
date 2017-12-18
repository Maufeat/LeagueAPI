#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> PostLolStoreV1LastPage(LeagueClient& _client, const std::string& pageType)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/lol-store/v1/lastPage?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(pageType).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostLolStoreV1LastPage(LeagueClient& _client, const std::string& pageType, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/lol-store/v1/lastPage?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(pageType).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}