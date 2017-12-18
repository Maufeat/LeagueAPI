#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPerksUISettings.hpp>
namespace lol {
  inline Result<json> PutLolPerksV1Settings(const LeagueClient& _client, const LolPerksUISettings& showLongDescriptions)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("put", "/lol-perks/v1/settings?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(showLongDescriptions).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}