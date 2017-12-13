#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPerksPerkPageResource.hpp>
namespace lol {
  Result<LolPerksPerkPageResource> GetLolPerksV1Currentpage(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-perks/v1/currentpage?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}