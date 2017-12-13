#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolEndOfGameEndOfGamePlayerComplaintV2.hpp>
namespace lol {
  Result<LolEndOfGameEndOfGamePlayerComplaintV2> PostLolEndOfGameV2PlayerComplaints(const LeagueClient& _client, const LolEndOfGameEndOfGamePlayerComplaintV2& complaint)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-end-of-game/v2/player-complaints?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(complaint).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}