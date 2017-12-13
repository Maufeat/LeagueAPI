#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPerksCustomizationLimits.hpp>
namespace lol {
  Result<LolPerksCustomizationLimits> GetLolPerksV1Customizationlimits(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-perks/v1/customizationlimits?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}