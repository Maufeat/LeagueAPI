#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPerksServiceSettings.hpp"
namespace lol {
  inline Result<LolPerksServiceSettings> GetLolPerksV1Servicesettings(LeagueClient& _client)
  {
    try {
      return ToResult<LolPerksServiceSettings>(_client.https.request("get", "/lol-perks/v1/servicesettings?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolPerksServiceSettings>(e.code());
    }
  }
  inline void GetLolPerksV1Servicesettings(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolPerksServiceSettings>&)> cb)
  {
    _client.httpsa.request("get", "/lol-perks/v1/servicesettings?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolPerksServiceSettings>(e));
            else
              cb(_client, ToResult<LolPerksServiceSettings>(response));
        });
  }
}