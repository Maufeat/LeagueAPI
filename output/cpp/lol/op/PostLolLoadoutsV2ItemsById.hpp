#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<json> PostLolLoadoutsV2ItemsById(const LeagueClient& _client, const uint32_t& id, const std::map<std::string, json>& items)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-loadouts/v2/items/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(items).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}