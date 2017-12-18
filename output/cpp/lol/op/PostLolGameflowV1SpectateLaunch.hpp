#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> PostLolGameflowV1SpectateLaunch(LeagueClient& _client, const std::optional<std::string>& summonerName = std::nullopt)
  {
    try {
      return Result<json> {
        _client.https.request("post", "/lol-gameflow/v1/spectate/launch?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(summonerName).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolGameflowV1SpectateLaunch(LeagueClient& _client, const std::optional<std::string>& summonerName = std::nullopt, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-gameflow/v1/spectate/launch?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(summonerName).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}