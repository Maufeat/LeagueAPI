#pragma once
#include "../base_op.hpp" 
#include "../def/LolPerksPerkPageResource.hpp"
namespace lol {
  inline Result<LolPerksPerkPageResource> GetLolPerksV1PagesById(const LeagueClient& _client, const int32_t& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolPerksPerkPageResource> {
        _client_.request("get", "/lol-perks/v1/pages/"+to_string(id)+"?" +
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