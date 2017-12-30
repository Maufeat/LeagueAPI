#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashPlaymodeRestrictedInfo.hpp"
namespace lol {
  template<typename T>
  inline Result<LolClashPlaymodeRestrictedInfo> GetLolClashV2PlaymodeRestricted(T& _client)
  {
    try {
      return ToResult<LolClashPlaymodeRestrictedInfo>(_client.https.request("get", "/lol-clash/v2/playmode-restricted?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolClashPlaymodeRestrictedInfo>(e.code());
    }
  }
  template<typename T>
  inline void GetLolClashV2PlaymodeRestricted(T& _client, std::function<void(T&, const Result<LolClashPlaymodeRestrictedInfo>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v2/playmode-restricted?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolClashPlaymodeRestrictedInfo>(e));
            else
              cb(_client, ToResult<LolClashPlaymodeRestrictedInfo>(response));
        });
  }
}