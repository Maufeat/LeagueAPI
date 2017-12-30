#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLeaguesLeagueTeamMember { 
    std::string name;
    uint64_t id;
    uint64_t totalGamePlayed;
    float winRate; 
  };
  inline void to_json(json& j, const LolLeaguesLeagueTeamMember& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["totalGamePlayed"] = v.totalGamePlayed; 
    j["winRate"] = v.winRate; 
  }
  inline void from_json(const json& j, LolLeaguesLeagueTeamMember& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.totalGamePlayed = j.at("totalGamePlayed").get<uint64_t>(); 
    v.winRate = j.at("winRate").get<float>(); 
  }
}