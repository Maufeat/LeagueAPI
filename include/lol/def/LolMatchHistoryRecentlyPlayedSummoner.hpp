#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryRecentlyPlayedSummoner { 
    uint64_t teamId;
    std::string summonerName;
    uint64_t gameId;
    std::string gameCreationDate;
    uint64_t summonerId;
    uint64_t championId; 
  };
  inline void to_json(json& j, const LolMatchHistoryRecentlyPlayedSummoner& v) {
    j["teamId"] = v.teamId; 
    j["summonerName"] = v.summonerName; 
    j["gameId"] = v.gameId; 
    j["gameCreationDate"] = v.gameCreationDate; 
    j["summonerId"] = v.summonerId; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, LolMatchHistoryRecentlyPlayedSummoner& v) {
    v.teamId = j.at("teamId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.championId = j.at("championId").get<uint64_t>(); 
  }
}