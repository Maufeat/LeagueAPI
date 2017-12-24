#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesLeagueTeamMember.hpp"
namespace lol {
  struct LolLeaguesLeagueTeam { 
    std::string id;
    std::vector<LolLeaguesLeagueTeamMember> members;
    std::string name; 
  };
  inline void to_json(json& j, const LolLeaguesLeagueTeam& v) {
    j["id"] = v.id; 
    j["members"] = v.members; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolLeaguesLeagueTeam& v) {
    v.id = j.at("id").get<std::string>(); 
    v.members = j.at("members").get<std::vector<LolLeaguesLeagueTeamMember>>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}