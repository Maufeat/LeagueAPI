#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ClubsPresenceDataDto { 
    std::string summonerName;
    uint64_t summonerId;
    std::string clubTag;
    std::string clubName; 
  };
  inline void to_json(json& j, const ClubsPresenceDataDto& v) {
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
    j["clubTag"] = v.clubTag; 
    j["clubName"] = v.clubName; 
  }
  inline void from_json(const json& j, ClubsPresenceDataDto& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.clubTag = j.at("clubTag").get<std::string>(); 
    v.clubName = j.at("clubName").get<std::string>(); 
  }
}