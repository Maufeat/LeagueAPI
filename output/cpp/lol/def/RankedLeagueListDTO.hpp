#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RankedLeagueItemDTO.hpp>
namespace lol {
  struct RankedLeagueListDTO { 
    std::string requestorsName;
    std::string requestorsRank;
    std::string tier;
    uint32_t maxLeagueSize;
    std::string queue;
    std::string name;
    uint64_t nextApexUpdate;
    std::vector<RankedLeagueItemDTO> entries; 
  };
  inline void to_json(json& j, const RankedLeagueListDTO& v) {
    j["requestorsName"] = v.requestorsName; 
    j["requestorsRank"] = v.requestorsRank; 
    j["tier"] = v.tier; 
    j["maxLeagueSize"] = v.maxLeagueSize; 
    j["queue"] = v.queue; 
    j["name"] = v.name; 
    j["nextApexUpdate"] = v.nextApexUpdate; 
    j["entries"] = v.entries; 
  }
  inline void from_json(const json& j, RankedLeagueListDTO& v) {
    v.requestorsName = j.at("requestorsName").get<std::string>(); 
    v.requestorsRank = j.at("requestorsRank").get<std::string>(); 
    v.tier = j.at("tier").get<std::string>(); 
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint32_t>(); 
    v.queue = j.at("queue").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>(); 
    v.entries = j.at("entries").get<std::vector<RankedLeagueItemDTO>>(); 
  }
}