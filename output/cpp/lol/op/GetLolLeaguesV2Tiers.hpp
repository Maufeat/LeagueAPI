#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLeaguesParticipantTiers.hpp>
#include <lol/def/LolLeaguesLeagueQueueType.hpp>
namespace lol {
  Result<std::vector<LolLeaguesParticipantTiers>> GetLolLeaguesV2Tiers(const LeagueClient& _client, const std::vector<uint64_t>& summonerIds, const std::vector<LolLeaguesLeagueQueueType>& queueTypes)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-leagues/v2/tiers?" + SimpleWeb::QueryString::create(Args2Headers({ { "summonerIds", to_string(summonerIds) },
    { "queueTypes", to_string(queueTypes) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}