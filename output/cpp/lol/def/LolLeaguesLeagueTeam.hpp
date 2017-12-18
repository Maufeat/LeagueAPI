#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesLeagueTeamMember.hpp"
namespace lol {
  struct LolLeaguesLeagueTeam { 
    std::vector<LolLeaguesLeagueTeamMember> members;
    std::string name;
    std::string id; 
  };
  inline void to_json(json& j, const LolLeaguesLeagueTeam& v) {
    j["members"] = v.members; 
    j["name"] = v.name; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolLeaguesLeagueTeam& v) {
    v.members = j.at("members").get<std::vector<LolLeaguesLeagueTeamMember>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}