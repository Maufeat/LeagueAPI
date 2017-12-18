#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashKickRequest.hpp"
namespace lol {
  inline Result<json> PostLolClashV1TournamentByTournamentIdRosterKick(LeagueClient& _client, const int64_t& tournamentId, const LolClashKickRequest& kickRequest)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/kick?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(kickRequest).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void PostLolClashV1TournamentByTournamentIdRosterKick(LeagueClient& _client, const int64_t& tournamentId, const LolClashKickRequest& kickRequest, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/kick?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(kickRequest).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}