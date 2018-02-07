#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsLeagueItemDTO.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace lol {
  struct LeaguesLcdsLeagueListDTO { 
    std::string name;
    LeaguesLcdsLeagueTier tier;
    LeaguesLcdsQueueType queue;
    std::string requestorsName;
    std::vector<LeaguesLcdsLeagueItemDTO> entries;
    uint64_t nextApexUpdate;
    uint64_t maxLeagueSize; 
  };
  inline void to_json(json& j, const LeaguesLcdsLeagueListDTO& v) {
    j["name"] = v.name; 
    j["tier"] = v.tier; 
    j["queue"] = v.queue; 
    j["requestorsName"] = v.requestorsName; 
    j["entries"] = v.entries; 
    j["nextApexUpdate"] = v.nextApexUpdate; 
    j["maxLeagueSize"] = v.maxLeagueSize; 
  }
  inline void from_json(const json& j, LeaguesLcdsLeagueListDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
    v.queue = j.at("queue").get<LeaguesLcdsQueueType>(); 
    v.requestorsName = j.at("requestorsName").get<std::string>(); 
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO>>(); 
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>(); 
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint64_t>(); 
  }
}