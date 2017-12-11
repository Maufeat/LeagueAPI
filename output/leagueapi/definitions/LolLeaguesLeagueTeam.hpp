#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLeaguesLeagueTeamMember.hpp>"

namespace leagueapi {
  struct LolLeaguesLeagueTeam { /**/ 
    std::vector<LolLeaguesLeagueTeamMember> members;/**/
    std::string id;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolLeaguesLeagueTeam& v) { 
    j["members"] = v.members;
    j["id"] = v.id;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolLeaguesLeagueTeam& v) { 
    v.members = j.at("members").get<std::vector<LolLeaguesLeagueTeamMember>>(); 
    v.id = j.at("id").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 