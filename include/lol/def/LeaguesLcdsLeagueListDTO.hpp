#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsLeagueItemDTO.hpp"
#include "LeaguesLcdsQueueType.hpp"
namespace lol {
  struct LeaguesLcdsLeagueListDTO { 
    std::string name;
    std::vector<LeaguesLcdsLeagueItemDTO> entries;
    LeaguesLcdsQueueType queue;
    uint64_t maxLeagueSize;
    LeaguesLcdsLeagueTier tier;
    std::string requestorsName;
    uint64_t nextApexUpdate; 
  };
  inline void to_json(json& j, const LeaguesLcdsLeagueListDTO& v) {
    j["name"] = v.name; 
    j["entries"] = v.entries; 
    j["queue"] = v.queue; 
    j["maxLeagueSize"] = v.maxLeagueSize; 
    j["tier"] = v.tier; 
    j["requestorsName"] = v.requestorsName; 
    j["nextApexUpdate"] = v.nextApexUpdate; 
  }
  inline void from_json(const json& j, LeaguesLcdsLeagueListDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO>>(); 
    v.queue = j.at("queue").get<LeaguesLcdsQueueType>(); 
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint64_t>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
    v.requestorsName = j.at("requestorsName").get<std::string>(); 
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>(); 
  }
}