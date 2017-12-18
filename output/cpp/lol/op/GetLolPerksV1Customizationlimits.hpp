#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPerksCustomizationLimits.hpp"
namespace lol {
  inline Result<LolPerksCustomizationLimits> GetLolPerksV1Customizationlimits(LeagueClient& _client)
  {
    try {
      return Result<LolPerksCustomizationLimits> {
        _client.https.request("get", "/lol-perks/v1/customizationlimits?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPerksCustomizationLimits> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolPerksV1Customizationlimits(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolPerksCustomizationLimits>&)> cb)
  {
    _client.httpsa.request("get", "/lol-perks/v1/customizationlimits?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolPerksCustomizationLimits> { response });
          else
            cb(_client,Result<LolPerksCustomizationLimits> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}