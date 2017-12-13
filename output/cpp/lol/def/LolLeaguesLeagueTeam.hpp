#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesLeagueTeamMember.hpp>
namespace lol {
  struct LolLeaguesLeagueTeam { 
    std::vector<LolLeaguesLeagueTeamMember> members;
    std::string id;
    std::string name; 
  };
  void to_json(json& j, const LolLeaguesLeagueTeam& v) {
  j["members"] = v.members; 
  j["id"] = v.id; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, LolLeaguesLeagueTeam& v) {
  v.members = j.at("members").get<std::vector<LolLeaguesLeagueTeamMember>>(); 
  v.id = j.at("id").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}