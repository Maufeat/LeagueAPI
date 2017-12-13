#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolClashV1TournamentByTournamentIdBidOfferBySummonerIdOffer(const LeagueClient& _client, const int64_t& tournamentId, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/bid-offer/"+to_string(summonerId)+"/offer?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}