#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaguesLcdsLeagueItemDTO.hpp>
#include <lol/def/LeaguesLcdsQueueType.hpp>
#include <lol/def/LeaguesLcdsLeagueTier.hpp>
#include <lol/def/LeaguesLcdsLeagueRank.hpp>
namespace lol {
  struct LeaguesLcdsSummonerLeagueListDTO { 
    std::string name;
    LeaguesLcdsLeagueRank requestorsRank;
    LeaguesLcdsLeagueTier tier;
    LeaguesLcdsQueueType queue;
    std::string requestorsName;
    uint64_t nextApexUpdate;
    std::vector<LeaguesLcdsLeagueItemDTO> entries; 
  };
  inline void to_json(json& j, const LeaguesLcdsSummonerLeagueListDTO& v) {
    j["name"] = v.name; 
    j["requestorsRank"] = v.requestorsRank; 
    j["tier"] = v.tier; 
    j["queue"] = v.queue; 
    j["requestorsName"] = v.requestorsName; 
    j["nextApexUpdate"] = v.nextApexUpdate; 
    j["entries"] = v.entries; 
  }
  inline void from_json(const json& j, LeaguesLcdsSummonerLeagueListDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.requestorsRank = j.at("requestorsRank").get<LeaguesLcdsLeagueRank>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
    v.queue = j.at("queue").get<LeaguesLcdsQueueType>(); 
    v.requestorsName = j.at("requestorsName").get<std::string>(); 
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>(); 
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO>>(); 
  }
}