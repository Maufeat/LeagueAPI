#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryRecentlyPlayedSummoner { 
    uint64_t summonerId;
    std::string summonerName;
    uint64_t gameId;
    std::string gameCreationDate;
    uint64_t championId;
    uint64_t teamId; 
  };
  inline void to_json(json& j, const LolMatchHistoryRecentlyPlayedSummoner& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerName"] = v.summonerName; 
    j["gameId"] = v.gameId; 
    j["gameCreationDate"] = v.gameCreationDate; 
    j["championId"] = v.championId; 
    j["teamId"] = v.teamId; 
  }
  inline void from_json(const json& j, LolMatchHistoryRecentlyPlayedSummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>(); 
    v.championId = j.at("championId").get<uint64_t>(); 
    v.teamId = j.at("teamId").get<uint64_t>(); 
  }
}