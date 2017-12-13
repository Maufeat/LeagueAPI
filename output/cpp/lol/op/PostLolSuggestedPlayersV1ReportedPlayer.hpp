#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSuggestedPlayersSuggestedPlayersReportedPlayer.hpp>
namespace lol {
  Result<void> PostLolSuggestedPlayersV1ReportedPlayer(const LeagueClient& _client, const LolSuggestedPlayersSuggestedPlayersReportedPlayer& resource)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-suggested-players/v1/reported-player?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(resource).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}