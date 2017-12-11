#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LeaguesLcdsTeamIdDTO.hpp>
#include <leagueapi/definitions/LeaguesLcdsRosterDTO.hpp>

namespace leagueapi {
  struct LeaguesLcdsTeamDTO { /**/ 
    LeaguesLcdsTeamIdDTO teamId;/**/
    LeaguesLcdsRosterDTO roster;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LeaguesLcdsTeamDTO& v) { 
    j["teamId"] = v.teamId;
    j["roster"] = v.roster;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LeaguesLcdsTeamDTO& v) { 
    v.teamId = j.at("teamId").get<LeaguesLcdsTeamIdDTO>(); 
    v.roster = j.at("roster").get<LeaguesLcdsRosterDTO>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 