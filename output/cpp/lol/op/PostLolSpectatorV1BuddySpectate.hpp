#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/SummonerOrTeamAvailabilty.hpp>
namespace lol {
  Result<SummonerOrTeamAvailabilty> PostLolSpectatorV1BuddySpectate(const LeagueClient& _client, const std::vector<std::string>& summonerOrTeamNames)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<SummonerOrTeamAvailabilty> {
        _client_.request("post", "/lol-spectator/v1/buddy/spectate?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(summonerOrTeamNames).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<SummonerOrTeamAvailabilty> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}