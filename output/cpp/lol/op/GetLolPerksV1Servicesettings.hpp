#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPerksServiceSettings.hpp>
namespace lol {
  inline Result<LolPerksServiceSettings> GetLolPerksV1Servicesettings(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolPerksServiceSettings> {
        _client_.request("get", "/lol-perks/v1/servicesettings?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPerksServiceSettings> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}