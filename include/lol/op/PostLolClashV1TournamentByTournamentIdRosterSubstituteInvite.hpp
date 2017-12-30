#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashInviteSubRequest.hpp"
namespace lol {
  template<typename T>
  inline Result<json> PostLolClashV1TournamentByTournamentIdRosterSubstituteInvite(T& _client, const int64_t& tournamentId, const LolClashInviteSubRequest& inviteSubRequest)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/substitute/invite?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(inviteSubRequest).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void PostLolClashV1TournamentByTournamentIdRosterSubstituteInvite(T& _client, const int64_t& tournamentId, const LolClashInviteSubRequest& inviteSubRequest, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/substitute/invite?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(inviteSubRequest).dump(),
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