#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashInviteSubRequest.hpp"
namespace lol {
  inline Result<json> PostLolClashV1TournamentByTournamentIdRosterSubstituteInvite(LeagueClient& _client, const int64_t& tournamentId, const LolClashInviteSubRequest& inviteSubRequest)
  {
    try {
      return Result<json> {
        _client.https.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/substitute/invite?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(inviteSubRequest).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolClashV1TournamentByTournamentIdRosterSubstituteInvite(LeagueClient& _client, const int64_t& tournamentId, const LolClashInviteSubRequest& inviteSubRequest, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/substitute/invite?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(inviteSubRequest).dump(),
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