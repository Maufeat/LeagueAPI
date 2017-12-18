#pragma once
#include "../base_op.hpp" 
#include "../def/LolMapsMaps.hpp"
namespace lol {
  inline Result<void> PostLolMapsV1Map(const LeagueClient& _client, const LolMapsMaps& map)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-maps/v1/map?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(map).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}