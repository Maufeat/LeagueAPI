#pragma once
#include "../base_op.hpp" 
#include "../def/LolPerksPerkPageResource.hpp"
namespace lol {
  inline Result<json> PutLolPerksV1PagesById(const LeagueClient& _client, const int32_t& id, const LolPerksPerkPageResource& page)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("put", "/lol-perks/v1/pages/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(page).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}