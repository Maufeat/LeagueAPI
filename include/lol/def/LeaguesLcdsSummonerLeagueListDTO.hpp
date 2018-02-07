#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsLeagueItemDTO.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace lol {
  struct LeaguesLcdsSummonerLeagueListDTO { 
    std::string name;
    LeaguesLcdsLeagueTier tier;
    LeaguesLcdsQueueType queue;
    std::string requestorsName;
    std::vector<LeaguesLcdsLeagueItemDTO> entries;
    uint64_t nextApexUpdate;
    LeaguesLcdsLeagueRank requestorsRank; 
  };
  inline void to_json(json& j, const LeaguesLcdsSummonerLeagueListDTO& v) {
    j["name"] = v.name; 
    j["tier"] = v.tier; 
    j["queue"] = v.queue; 
    j["requestorsName"] = v.requestorsName; 
    j["entries"] = v.entries; 
    j["nextApexUpdate"] = v.nextApexUpdate; 
    j["requestorsRank"] = v.requestorsRank; 
  }
  inline void from_json(const json& j, LeaguesLcdsSummonerLeagueListDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
    v.queue = j.at("queue").get<LeaguesLcdsQueueType>(); 
    v.requestorsName = j.at("requestorsName").get<std::string>(); 
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO>>(); 
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>(); 
    v.requestorsRank = j.at("requestorsRank").get<LeaguesLcdsLeagueRank>(); 
  }
}