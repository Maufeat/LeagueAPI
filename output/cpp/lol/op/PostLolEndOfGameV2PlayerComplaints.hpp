#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolEndOfGameEndOfGamePlayerComplaintV2.hpp"
namespace lol {
  inline Result<LolEndOfGameEndOfGamePlayerComplaintV2> PostLolEndOfGameV2PlayerComplaints(LeagueClient& _client, const LolEndOfGameEndOfGamePlayerComplaintV2& complaint)
  {
    try {
      return Result<LolEndOfGameEndOfGamePlayerComplaintV2> {
        _client.https.request("post", "/lol-end-of-game/v2/player-complaints?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(complaint).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolEndOfGameEndOfGamePlayerComplaintV2> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolEndOfGameV2PlayerComplaints(LeagueClient& _client, const LolEndOfGameEndOfGamePlayerComplaintV2& complaint, std::function<void(LeagueClient&,const Result<LolEndOfGameEndOfGamePlayerComplaintV2>&)> cb)
  {
    _client.httpsa.request("post", "/lol-end-of-game/v2/player-complaints?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(complaint).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolEndOfGameEndOfGamePlayerComplaintV2> { response });
          else
            cb(_client,Result<LolEndOfGameEndOfGamePlayerComplaintV2> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}