#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPerksUISettings.hpp"
namespace lol {
  inline Result<LolPerksUISettings> GetLolPerksV1Settings(LeagueClient& _client)
  {
    try {
      return ToResult<LolPerksUISettings>(_client.https.request("get", "/lol-perks/v1/settings?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolPerksUISettings>(e.code());
    }
  }
  inline void GetLolPerksV1Settings(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolPerksUISettings>&)> cb)
  {
    _client.httpsa.request("get", "/lol-perks/v1/settings?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolPerksUISettings>(e));
            else
              cb(_client, ToResult<LolPerksUISettings>(response));
        });
  }
}