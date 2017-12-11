#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LeaguesLcdsTeamMemberInfoDTO.hpp>

namespace leagueapi {
  struct LeaguesLcdsRosterDTO { /**/ 
    std::vector<LeaguesLcdsTeamMemberInfoDTO> memberList;/**/
  };
  static void to_json(json& j, const LeaguesLcdsRosterDTO& v) { 
    j["memberList"] = v.memberList;
  }
  static void from_json(const json& j, LeaguesLcdsRosterDTO& v) { 
    v.memberList = j.at("memberList").get<std::vector<LeaguesLcdsTeamMemberInfoDTO>>(); 
  }
} 