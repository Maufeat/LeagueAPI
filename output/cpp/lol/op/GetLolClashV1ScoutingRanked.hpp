#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashRankedScoutingMember.hpp>
namespace lol {
  Result<std::vector<LolClashRankedScoutingMember>> GetLolClashV1ScoutingRanked(const LeagueClient& _client, const std::vector<uint64_t>& summonerIds)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clash/v1/scouting/ranked?" + SimpleWeb::QueryString::create(Args2Headers({ { "summonerIds", to_string(summonerIds) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}