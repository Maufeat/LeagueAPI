#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPerksPerkUIStyle.hpp>
namespace lol {
  Result<std::vector<LolPerksPerkUIStyle>> GetLolPerksV1Styles(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-perks/v1/styles?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}