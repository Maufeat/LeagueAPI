#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPerksPerkPageResource.hpp>
namespace lol {
  inline Result<LolPerksPerkPageResource> PostLolPerksV1Pages(const LeagueClient& _client, const LolPerksPerkPageResource& page)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolPerksPerkPageResource> {
        _client_.request("post", "/lol-perks/v1/pages?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(page).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPerksPerkPageResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}