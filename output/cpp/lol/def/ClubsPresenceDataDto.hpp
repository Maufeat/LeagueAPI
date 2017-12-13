#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ClubsPresenceDataDto { 
    std::string clubName;
    std::string clubTag;
    std::string summonerName;
    uint64_t summonerId; 
  };
  void to_json(json& j, const ClubsPresenceDataDto& v) {
    j["clubName"] = v.clubName; 
    j["clubTag"] = v.clubTag; 
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, ClubsPresenceDataDto& v) {
    v.clubName = j.at("clubName").get<std::string>(); 
    v.clubTag = j.at("clubTag").get<std::string>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}