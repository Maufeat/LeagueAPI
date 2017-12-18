#pragma once
#include "../base_op.hpp" 
#include "../def/LolClashRankedScoutingMember.hpp"
namespace lol {
  inline Result<std::vector<LolClashRankedScoutingMember>> GetLolClashV1ScoutingRanked(const LeagueClient& _client, const std::vector<uint64_t>& summonerIds)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolClashRankedScoutingMember>> {
        _client_.request("get", "/lol-clash/v1/scouting/ranked?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "summonerIds", to_string(summonerIds) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolClashRankedScoutingMember>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}