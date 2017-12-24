#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryRecentlyPlayedSummoner { 
    uint64_t summonerId;
    uint64_t gameId;
    uint64_t championId;
    std::string summonerName;
    uint64_t teamId;
    std::string gameCreationDate; 
  };
  inline void to_json(json& j, const LolMatchHistoryRecentlyPlayedSummoner& v) {
    j["summonerId"] = v.summonerId; 
    j["gameId"] = v.gameId; 
    j["championId"] = v.championId; 
    j["summonerName"] = v.summonerName; 
    j["teamId"] = v.teamId; 
    j["gameCreationDate"] = v.gameCreationDate; 
  }
  inline void from_json(const json& j, LolMatchHistoryRecentlyPlayedSummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.championId = j.at("championId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.teamId = j.at("teamId").get<uint64_t>(); 
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>(); 
  }
}