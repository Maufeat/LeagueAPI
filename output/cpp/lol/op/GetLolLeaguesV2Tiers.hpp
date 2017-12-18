#pragma once
#include "../base_op.hpp" 
#include "../def/LolLeaguesParticipantTiers.hpp"
#include "../def/LolLeaguesLeagueQueueType.hpp"
namespace lol {
  inline Result<std::vector<LolLeaguesParticipantTiers>> GetLolLeaguesV2Tiers(const LeagueClient& _client, const std::vector<uint64_t>& summonerIds, const std::vector<LolLeaguesLeagueQueueType>& queueTypes)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLeaguesParticipantTiers>> {
        _client_.request("get", "/lol-leagues/v2/tiers?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "summonerIds", to_string(summonerIds) },
           { "queueTypes", to_string(queueTypes) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLeaguesParticipantTiers>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}