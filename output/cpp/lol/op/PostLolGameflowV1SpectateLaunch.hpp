#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<json> PostLolGameflowV1SpectateLaunch(const LeagueClient& _client, const std::optional<std::string>& summonerName = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-gameflow/v1/spectate/launch?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(summonerName).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}