#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLeaguesLeagueTeamMember { 
    uint64_t id;
    float winRate;
    uint64_t totalGamePlayed;
    std::string name; 
  };
  inline void to_json(json& j, const LolLeaguesLeagueTeamMember& v) {
    j["id"] = v.id; 
    j["winRate"] = v.winRate; 
    j["totalGamePlayed"] = v.totalGamePlayed; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolLeaguesLeagueTeamMember& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.winRate = j.at("winRate").get<float>(); 
    v.totalGamePlayed = j.at("totalGamePlayed").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}