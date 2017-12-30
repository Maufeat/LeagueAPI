#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPerksPerkPageResource.hpp"
namespace lol {
  template<typename T>
  inline Result<LolPerksPerkPageResource> PostLolPerksV1Pages(T& _client, const LolPerksPerkPageResource& page)
  {
    try {
      return ToResult<LolPerksPerkPageResource>(_client.https.request("post", "/lol-perks/v1/pages?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(page).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolPerksPerkPageResource>(e.code());
    }
  }
  template<typename T>
  inline void PostLolPerksV1Pages(T& _client, const LolPerksPerkPageResource& page, std::function<void(T&, const Result<LolPerksPerkPageResource>&)> cb)
  {
    _client.httpsa.request("post", "/lol-perks/v1/pages?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(page).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolPerksPerkPageResource>(e));
            else
              cb(_client, ToResult<LolPerksPerkPageResource>(response));
        });
  }
}