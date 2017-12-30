#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPerksPerkPageResource.hpp"
namespace lol {
  template<typename T>
  inline Result<LolPerksPerkPageResource> GetLolPerksV1PagesById(T& _client, const int32_t& id)
  {
    try {
      return ToResult<LolPerksPerkPageResource>(_client.https.request("get", "/lol-perks/v1/pages/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolPerksPerkPageResource>(e.code());
    }
  }
  template<typename T>
  inline void GetLolPerksV1PagesById(T& _client, const int32_t& id, std::function<void(T&, const Result<LolPerksPerkPageResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-perks/v1/pages/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolPerksPerkPageResource>(e));
            else
              cb(_client, ToResult<LolPerksPerkPageResource>(response));
        });
  }
}