#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaguesLcdsLeagueItemDTO.hpp>
#include <lol/def/LeaguesLcdsQueueType.hpp>
#include <lol/def/LeaguesLcdsLeagueTier.hpp>
namespace lol {
  struct LeaguesLcdsLeagueListDTO { 
    std::string name;
    LeaguesLcdsLeagueTier tier;
    uint64_t maxLeagueSize;
    LeaguesLcdsQueueType queue;
    std::string requestorsName;
    uint64_t nextApexUpdate;
    std::vector<LeaguesLcdsLeagueItemDTO> entries; 
  };
  inline void to_json(json& j, const LeaguesLcdsLeagueListDTO& v) {
    j["name"] = v.name; 
    j["tier"] = v.tier; 
    j["maxLeagueSize"] = v.maxLeagueSize; 
    j["queue"] = v.queue; 
    j["requestorsName"] = v.requestorsName; 
    j["nextApexUpdate"] = v.nextApexUpdate; 
    j["entries"] = v.entries; 
  }
  inline void from_json(const json& j, LeaguesLcdsLeagueListDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint64_t>(); 
    v.queue = j.at("queue").get<LeaguesLcdsQueueType>(); 
    v.requestorsName = j.at("requestorsName").get<std::string>(); 
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>(); 
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO>>(); 
  }
}