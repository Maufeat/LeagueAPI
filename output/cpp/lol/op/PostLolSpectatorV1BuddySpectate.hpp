#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/SummonerOrTeamAvailabilty.hpp"
namespace lol {
  inline Result<SummonerOrTeamAvailabilty> PostLolSpectatorV1BuddySpectate(LeagueClient& _client, const std::vector<std::string>& summonerOrTeamNames)
  {
    try {
      return Result<SummonerOrTeamAvailabilty> {
        _client.https.request("post", "/lol-spectator/v1/buddy/spectate?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(summonerOrTeamNames).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<SummonerOrTeamAvailabilty> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolSpectatorV1BuddySpectate(LeagueClient& _client, const std::vector<std::string>& summonerOrTeamNames, std::function<void(LeagueClient&,const Result<SummonerOrTeamAvailabilty>&)> cb)
  {
    _client.httpsa.request("post", "/lol-spectator/v1/buddy/spectate?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(summonerOrTeamNames).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<SummonerOrTeamAvailabilty> { response });
          else
            cb(_client,Result<SummonerOrTeamAvailabilty> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}