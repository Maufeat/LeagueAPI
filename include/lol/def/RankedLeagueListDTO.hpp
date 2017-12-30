#pragma once
#include "../base_def.hpp" 
#include "RankedLeagueItemDTO.hpp"
namespace lol {
  struct RankedLeagueListDTO { 
    std::string name;
    std::vector<RankedLeagueItemDTO> entries;
    std::string requestorsRank;
    std::string queue;
    uint32_t maxLeagueSize;
    std::string tier;
    std::string requestorsName;
    uint64_t nextApexUpdate; 
  };
  inline void to_json(json& j, const RankedLeagueListDTO& v) {
    j["name"] = v.name; 
    j["entries"] = v.entries; 
    j["requestorsRank"] = v.requestorsRank; 
    j["queue"] = v.queue; 
    j["maxLeagueSize"] = v.maxLeagueSize; 
    j["tier"] = v.tier; 
    j["requestorsName"] = v.requestorsName; 
    j["nextApexUpdate"] = v.nextApexUpdate; 
  }
  inline void from_json(const json& j, RankedLeagueListDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.entries = j.at("entries").get<std::vector<RankedLeagueItemDTO>>(); 
    v.requestorsRank = j.at("requestorsRank").get<std::string>(); 
    v.queue = j.at("queue").get<std::string>(); 
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint32_t>(); 
    v.tier = j.at("tier").get<std::string>(); 
    v.requestorsName = j.at("requestorsName").get<std::string>(); 
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>(); 
  }
}