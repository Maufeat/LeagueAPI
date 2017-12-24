#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsTeamIdDTO.hpp"
#include "LeaguesLcdsRosterDTO.hpp"
namespace lol {
  struct LeaguesLcdsTeamDTO { 
    LeaguesLcdsRosterDTO roster;
    std::string name;
    LeaguesLcdsTeamIdDTO teamId; 
  };
  inline void to_json(json& j, const LeaguesLcdsTeamDTO& v) {
    j["roster"] = v.roster; 
    j["name"] = v.name; 
    j["teamId"] = v.teamId; 
  }
  inline void from_json(const json& j, LeaguesLcdsTeamDTO& v) {
    v.roster = j.at("roster").get<LeaguesLcdsRosterDTO>(); 
    v.name = j.at("name").get<std::string>(); 
    v.teamId = j.at("teamId").get<LeaguesLcdsTeamIdDTO>(); 
  }
}