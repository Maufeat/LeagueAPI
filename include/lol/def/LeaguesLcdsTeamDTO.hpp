#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsTeamIdDTO.hpp"
#include "LeaguesLcdsRosterDTO.hpp"
namespace lol {
  struct LeaguesLcdsTeamDTO { 
    LeaguesLcdsTeamIdDTO teamId;
    std::string name;
    LeaguesLcdsRosterDTO roster; 
  };
  inline void to_json(json& j, const LeaguesLcdsTeamDTO& v) {
    j["teamId"] = v.teamId; 
    j["name"] = v.name; 
    j["roster"] = v.roster; 
  }
  inline void from_json(const json& j, LeaguesLcdsTeamDTO& v) {
    v.teamId = j.at("teamId").get<LeaguesLcdsTeamIdDTO>(); 
    v.name = j.at("name").get<std::string>(); 
    v.roster = j.at("roster").get<LeaguesLcdsRosterDTO>(); 
  }
}