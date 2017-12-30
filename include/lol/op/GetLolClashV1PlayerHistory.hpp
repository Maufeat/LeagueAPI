#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashRosterStats.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolClashRosterStats>> GetLolClashV1PlayerHistory(T& _client)
  {
    try {
      return ToResult<std::vector<LolClashRosterStats>>(_client.https.request("get", "/lol-clash/v1/player/history?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolClashRosterStats>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolClashV1PlayerHistory(T& _client, std::function<void(T&, const Result<std::vector<LolClashRosterStats>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/player/history?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolClashRosterStats>>(e));
            else
              cb(_client, ToResult<std::vector<LolClashRosterStats>>(response));
        });
  }
}