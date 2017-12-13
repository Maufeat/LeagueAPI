#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaguesLcdsRosterDTO.hpp>
#include <lol/def/LeaguesLcdsTeamIdDTO.hpp>
namespace lol {
  struct LeaguesLcdsTeamDTO { 
    LeaguesLcdsTeamIdDTO teamId;
    LeaguesLcdsRosterDTO roster;
    std::string name; 
  };
  void to_json(json& j, const LeaguesLcdsTeamDTO& v) {
  j["teamId"] = v.teamId; 
  j["roster"] = v.roster; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, LeaguesLcdsTeamDTO& v) {
  v.teamId = j.at("teamId").get<LeaguesLcdsTeamIdDTO>(); 
  v.roster = j.at("roster").get<LeaguesLcdsRosterDTO>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}