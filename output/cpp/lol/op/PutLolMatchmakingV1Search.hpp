#pragma once
#include "../base_op.hpp" 
#include "../def/LolMatchmakingMatchmakingSearchResource.hpp"
namespace lol {
  inline Result<json> PutLolMatchmakingV1Search(const LeagueClient& _client, const LolMatchmakingMatchmakingSearchResource& search)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("put", "/lol-matchmaking/v1/search?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(search).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}