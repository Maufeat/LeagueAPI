#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaguesLcdsTeamIdDTO.hpp>
#include <lol/def/LeaguesLcdsRosterDTO.hpp>
namespace lol {
  struct LeaguesLcdsTeamDTO { 
    std::string name;
    LeaguesLcdsRosterDTO roster;
    LeaguesLcdsTeamIdDTO teamId; 
  };
  inline void to_json(json& j, const LeaguesLcdsTeamDTO& v) {
    j["name"] = v.name; 
    j["roster"] = v.roster; 
    j["teamId"] = v.teamId; 
  }
  inline void from_json(const json& j, LeaguesLcdsTeamDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.roster = j.at("roster").get<LeaguesLcdsRosterDTO>(); 
    v.teamId = j.at("teamId").get<LeaguesLcdsTeamIdDTO>(); 
  }
}