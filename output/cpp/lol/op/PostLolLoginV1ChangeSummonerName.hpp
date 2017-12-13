#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolLoginV1ChangeSummonerName(const LeagueClient& _client, const std::string& name)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-login/v1/change-summoner-name?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(name).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}