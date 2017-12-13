#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ClubsPresenceDataDto { 
    uint64_t summonerId;
    std::string summonerName;
    std::string clubTag;
    std::string clubName; 
  };
  void to_json(json& j, const ClubsPresenceDataDto& v) {
  j["summonerId"] = v.summonerId; 
  j["summonerName"] = v.summonerName; 
  j["clubTag"] = v.clubTag; 
  j["clubName"] = v.clubName; 
  }
  void from_json(const json& j, ClubsPresenceDataDto& v) {
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.clubTag = j.at("clubTag").get<std::string>(); 
  v.clubName = j.at("clubName").get<std::string>(); 
  }
}