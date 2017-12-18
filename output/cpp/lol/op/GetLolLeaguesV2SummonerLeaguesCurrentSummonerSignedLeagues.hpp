#pragma once
#include "../base_op.hpp" 
#include "../def/LolLeaguesSignedSummonerLeagueItemsDTO.hpp"
namespace lol {
  inline Result<LolLeaguesSignedSummonerLeagueItemsDTO> GetLolLeaguesV2SummonerLeaguesCurrentSummonerSignedLeagues(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLeaguesSignedSummonerLeagueItemsDTO> {
        _client_.request("get", "/lol-leagues/v2/summoner-leagues/current-summoner/signed-leagues?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLeaguesSignedSummonerLeagueItemsDTO> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}