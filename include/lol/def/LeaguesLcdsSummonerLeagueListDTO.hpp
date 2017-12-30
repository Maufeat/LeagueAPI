#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsLeagueItemDTO.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsQueueType.hpp"
namespace lol {
  struct LeaguesLcdsSummonerLeagueListDTO { 
    std::string name;
    std::vector<LeaguesLcdsLeagueItemDTO> entries;
    LeaguesLcdsLeagueRank requestorsRank;
    LeaguesLcdsQueueType queue;
    LeaguesLcdsLeagueTier tier;
    std::string requestorsName;
    uint64_t nextApexUpdate; 
  };
  inline void to_json(json& j, const LeaguesLcdsSummonerLeagueListDTO& v) {
    j["name"] = v.name; 
    j["entries"] = v.entries; 
    j["requestorsRank"] = v.requestorsRank; 
    j["queue"] = v.queue; 
    j["tier"] = v.tier; 
    j["requestorsName"] = v.requestorsName; 
    j["nextApexUpdate"] = v.nextApexUpdate; 
  }
  inline void from_json(const json& j, LeaguesLcdsSummonerLeagueListDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO>>(); 
    v.requestorsRank = j.at("requestorsRank").get<LeaguesLcdsLeagueRank>(); 
    v.queue = j.at("queue").get<LeaguesLcdsQueueType>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
    v.requestorsName = j.at("requestorsName").get<std::string>(); 
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>(); 
  }
}