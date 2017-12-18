#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPerksPerkPageResource.hpp>
namespace lol {
  inline Result<LolPerksPerkPageResource> GetLolPerksV1Currentpage(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolPerksPerkPageResource> {
        _client_.request("get", "/lol-perks/v1/currentpage?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPerksPerkPageResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}