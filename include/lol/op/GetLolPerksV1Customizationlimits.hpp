#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPerksCustomizationLimits.hpp"
namespace lol {
  template<typename T>
  inline Result<LolPerksCustomizationLimits> GetLolPerksV1Customizationlimits(T& _client)
  {
    try {
      return ToResult<LolPerksCustomizationLimits>(_client.https.request("get", "/lol-perks/v1/customizationlimits?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolPerksCustomizationLimits>(e.code());
    }
  }
  template<typename T>
  inline void GetLolPerksV1Customizationlimits(T& _client, std::function<void(T&, const Result<LolPerksCustomizationLimits>&)> cb)
  {
    _client.httpsa.request("get", "/lol-perks/v1/customizationlimits?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolPerksCustomizationLimits>(e));
            else
              cb(_client, ToResult<LolPerksCustomizationLimits>(response));
        });
  }
}