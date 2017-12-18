#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLeaguesLeagueTeamMember { 
    float winRate;
    std::string name;
    uint64_t totalGamePlayed;
    uint64_t id; 
  };
  inline void to_json(json& j, const LolLeaguesLeagueTeamMember& v) {
    j["winRate"] = v.winRate; 
    j["name"] = v.name; 
    j["totalGamePlayed"] = v.totalGamePlayed; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolLeaguesLeagueTeamMember& v) {
    v.winRate = j.at("winRate").get<float>(); 
    v.name = j.at("name").get<std::string>(); 
    v.totalGamePlayed = j.at("totalGamePlayed").get<uint64_t>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
}