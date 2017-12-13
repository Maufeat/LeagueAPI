#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolEndOfGameEndOfGamePlayerComplaintV2.hpp>
namespace lol {
  Result<LolEndOfGameEndOfGamePlayerComplaintV2> PostLolEndOfGameV2PlayerComplaints(const LeagueClient& _client, const LolEndOfGameEndOfGamePlayerComplaintV2& complaint)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolEndOfGameEndOfGamePlayerComplaintV2> {
        _client_.request("post", "/lol-end-of-game/v2/player-complaints?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(complaint).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolEndOfGameEndOfGamePlayerComplaintV2> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}