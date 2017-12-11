#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/ClubMember.hpp>

namespace leagueapi {
  struct ClubMemberLists { /**/ 
    std::vector<ClubMember> removedMembers;/**/
    std::vector<ClubMember> nominatedMembers;/**/
    std::vector<ClubMember> invitedMembers;/**/
    std::vector<ClubMember> activeMembers;/**/
  };
  static void to_json(json& j, const ClubMemberLists& v) { 
    j["removedMembers"] = v.removedMembers;
    j["nominatedMembers"] = v.nominatedMembers;
    j["invitedMembers"] = v.invitedMembers;
    j["activeMembers"] = v.activeMembers;
  }
  static void from_json(const json& j, ClubMemberLists& v) { 
    v.removedMembers = j.at("removedMembers").get<std::vector<ClubMember>>(); 
    v.nominatedMembers = j.at("nominatedMembers").get<std::vector<ClubMember>>(); 
    v.invitedMembers = j.at("invitedMembers").get<std::vector<ClubMember>>(); 
    v.activeMembers = j.at("activeMembers").get<std::vector<ClubMember>>(); 
  }
} 