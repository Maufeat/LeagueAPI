#pragma once
#include "../base_def.hpp" 
#include "RankedLeagueItemDTO.hpp"
namespace lol {
  struct RankedLeagueListDTO { 
    std::string name;
    std::vector<RankedLeagueItemDTO> entries;
    std::string tier;
    std::string queue;
    std::string requestorsRank;
    std::string requestorsName;
    uint32_t maxLeagueSize;
    uint64_t nextApexUpdate; 
  };
  inline void to_json(json& j, const RankedLeagueListDTO& v) {
    j["name"] = v.name; 
    j["entries"] = v.entries; 
    j["tier"] = v.tier; 
    j["queue"] = v.queue; 
    j["requestorsRank"] = v.requestorsRank; 
    j["requestorsName"] = v.requestorsName; 
    j["maxLeagueSize"] = v.maxLeagueSize; 
    j["nextApexUpdate"] = v.nextApexUpdate; 
  }
  inline void from_json(const json& j, RankedLeagueListDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.entries = j.at("entries").get<std::vector<RankedLeagueItemDTO>>(); 
    v.tier = j.at("tier").get<std::string>(); 
    v.queue = j.at("queue").get<std::string>(); 
    v.requestorsRank = j.at("requestorsRank").get<std::string>(); 
    v.requestorsName = j.at("requestorsName").get<std::string>(); 
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint32_t>(); 
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>(); 
  }
}