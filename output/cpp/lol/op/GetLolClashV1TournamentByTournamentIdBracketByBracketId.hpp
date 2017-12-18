#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashBracket.hpp"
namespace lol {
  inline Result<LolClashBracket> GetLolClashV1TournamentByTournamentIdBracketByBracketId(LeagueClient& _client, const int64_t& tournamentId, const int64_t& bracketId)
  {
    try {
      return Result<LolClashBracket> {
        _client.https.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/bracket/"+to_string(bracketId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashBracket> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClashV1TournamentByTournamentIdBracketByBracketId(LeagueClient& _client, const int64_t& tournamentId, const int64_t& bracketId, std::function<void(LeagueClient&,const Result<LolClashBracket>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/bracket/"+to_string(bracketId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolClashBracket> { response });
          else
            cb(_client,Result<LolClashBracket> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}