#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsLeagueItemDTO.hpp"
namespace lol {
  struct LeaguesLcdsLeagueListDTO { 
    std::vector<LeaguesLcdsLeagueItemDTO> entries;
    uint64_t nextApexUpdate;
    std::string name;
    uint64_t maxLeagueSize;
    std::string requestorsName;
    LeaguesLcdsQueueType queue;
    LeaguesLcdsLeagueTier tier; 
  };
  inline void to_json(json& j, const LeaguesLcdsLeagueListDTO& v) {
    j["entries"] = v.entries; 
    j["nextApexUpdate"] = v.nextApexUpdate; 
    j["name"] = v.name; 
    j["maxLeagueSize"] = v.maxLeagueSize; 
    j["requestorsName"] = v.requestorsName; 
    j["queue"] = v.queue; 
    j["tier"] = v.tier; 
  }
  inline void from_json(const json& j, LeaguesLcdsLeagueListDTO& v) {
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO>>(); 
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint64_t>(); 
    v.requestorsName = j.at("requestorsName").get<std::string>(); 
    v.queue = j.at("queue").get<LeaguesLcdsQueueType>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
  }
}