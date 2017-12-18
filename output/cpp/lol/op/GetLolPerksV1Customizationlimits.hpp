#pragma once
#include "../base_op.hpp" 
#include "../def/LolPerksCustomizationLimits.hpp"
namespace lol {
  inline Result<LolPerksCustomizationLimits> GetLolPerksV1Customizationlimits(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolPerksCustomizationLimits> {
        _client_.request("get", "/lol-perks/v1/customizationlimits?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPerksCustomizationLimits> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}