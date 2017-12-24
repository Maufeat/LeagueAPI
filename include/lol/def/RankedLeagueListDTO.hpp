#pragma once
#include "../base_def.hpp" 
#include "RankedLeagueItemDTO.hpp"
namespace lol {
  struct RankedLeagueListDTO { 
    std::vector<RankedLeagueItemDTO> entries;
    uint64_t nextApexUpdate;
    std::string name;
    uint32_t maxLeagueSize;
    std::string requestorsRank;
    std::string requestorsName;
    std::string queue;
    std::string tier; 
  };
  inline void to_json(json& j, const RankedLeagueListDTO& v) {
    j["entries"] = v.entries; 
    j["nextApexUpdate"] = v.nextApexUpdate; 
    j["name"] = v.name; 
    j["maxLeagueSize"] = v.maxLeagueSize; 
    j["requestorsRank"] = v.requestorsRank; 
    j["requestorsName"] = v.requestorsName; 
    j["queue"] = v.queue; 
    j["tier"] = v.tier; 
  }
  inline void from_json(const json& j, RankedLeagueListDTO& v) {
    v.entries = j.at("entries").get<std::vector<RankedLeagueItemDTO>>(); 
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint32_t>(); 
    v.requestorsRank = j.at("requestorsRank").get<std::string>(); 
    v.requestorsName = j.at("requestorsName").get<std::string>(); 
    v.queue = j.at("queue").get<std::string>(); 
    v.tier = j.at("tier").get<std::string>(); 
  }
}