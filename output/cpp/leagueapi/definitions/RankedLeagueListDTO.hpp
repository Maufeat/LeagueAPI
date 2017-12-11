#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/RankedLeagueItemDTO.hpp>

namespace leagueapi {
  struct RankedLeagueListDTO { /**/ 
    std::string tier;/**/
    std::string requestorsRank;/**/
    std::vector<RankedLeagueItemDTO> entries;/**/
    std::string name;/**/
    std::string queue;/**/
    uint64_t nextApexUpdate;/**/
    uint32_t maxLeagueSize;/**/
    std::string requestorsName;/**/
  };
  static void to_json(json& j, const RankedLeagueListDTO& v) { 
    j["tier"] = v.tier;
    j["requestorsRank"] = v.requestorsRank;
    j["entries"] = v.entries;
    j["name"] = v.name;
    j["queue"] = v.queue;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["maxLeagueSize"] = v.maxLeagueSize;
    j["requestorsName"] = v.requestorsName;
  }
  static void from_json(const json& j, RankedLeagueListDTO& v) { 
    v.tier = j.at("tier").get<std::string>(); 
    v.requestorsRank = j.at("requestorsRank").get<std::string>(); 
    v.entries = j.at("entries").get<std::vector<RankedLeagueItemDTO>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.queue = j.at("queue").get<std::string>(); 
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>(); 
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint32_t>(); 
    v.requestorsName = j.at("requestorsName").get<std::string>(); 
  }
} 