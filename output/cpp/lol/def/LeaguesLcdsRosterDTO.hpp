#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaguesLcdsTeamMemberInfoDTO.hpp>
namespace lol {
  struct LeaguesLcdsRosterDTO { 
    std::vector<LeaguesLcdsTeamMemberInfoDTO> memberList; 
  };
  inline void to_json(json& j, const LeaguesLcdsRosterDTO& v) {
    j["memberList"] = v.memberList; 
  }
  inline void from_json(const json& j, LeaguesLcdsRosterDTO& v) {
    v.memberList = j.at("memberList").get<std::vector<LeaguesLcdsTeamMemberInfoDTO>>(); 
  }
}