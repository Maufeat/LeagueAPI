#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSuggestedPlayersSuggestedPlayersReportedPlayer.hpp>
namespace lol {
  inline Result<void> PostLolSuggestedPlayersV1ReportedPlayer(const LeagueClient& _client, const LolSuggestedPlayersSuggestedPlayersReportedPlayer& resource)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-suggested-players/v1/reported-player?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(resource).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}