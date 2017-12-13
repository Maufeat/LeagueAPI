#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPerksPerkUIPerk.hpp>
namespace lol {
  Result<std::vector<LolPerksPerkUIPerk>> GetLolPerksV1Perks(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-perks/v1/perks?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}