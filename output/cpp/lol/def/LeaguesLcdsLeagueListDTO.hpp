#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaguesLcdsLeagueItemDTO.hpp>
#include <lol/def/LeaguesLcdsQueueType.hpp>
#include <lol/def/LeaguesLcdsLeagueTier.hpp>
namespace lol {
  struct LeaguesLcdsLeagueListDTO { 
    LeaguesLcdsLeagueTier tier;
    std::vector<LeaguesLcdsLeagueItemDTO> entries;
    std::string name;
    LeaguesLcdsQueueType queue;
    uint64_t nextApexUpdate;
    uint64_t maxLeagueSize;
    std::string requestorsName; 
  };
  void to_json(json& j, const LeaguesLcdsLeagueListDTO& v) {
  j["tier"] = v.tier; 
  j["entries"] = v.entries; 
  j["name"] = v.name; 
  j["queue"] = v.queue; 
  j["nextApexUpdate"] = v.nextApexUpdate; 
  j["maxLeagueSize"] = v.maxLeagueSize; 
  j["requestorsName"] = v.requestorsName; 
  }
  void from_json(const json& j, LeaguesLcdsLeagueListDTO& v) {
  v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
  v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO>>(); 
  v.name = j.at("name").get<std::string>(); 
  v.queue = j.at("queue").get<LeaguesLcdsQueueType>(); 
  v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>(); 
  v.maxLeagueSize = j.at("maxLeagueSize").get<uint64_t>(); 
  v.requestorsName = j.at("requestorsName").get<std::string>(); 
  }
}