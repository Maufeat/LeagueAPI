#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClubMember.hpp>
namespace lol {
  struct ClubMemberLists { 
    std::vector<ClubMember> nominatedMembers;
    std::vector<ClubMember> removedMembers;
    std::vector<ClubMember> invitedMembers;
    std::vector<ClubMember> activeMembers; 
  };
  void to_json(json& j, const ClubMemberLists& v) {
    j["nominatedMembers"] = v.nominatedMembers; 
    j["removedMembers"] = v.removedMembers; 
    j["invitedMembers"] = v.invitedMembers; 
    j["activeMembers"] = v.activeMembers; 
  }
  void from_json(const json& j, ClubMemberLists& v) {
    v.nominatedMembers = j.at("nominatedMembers").get<std::vector<ClubMember>>(); 
    v.removedMembers = j.at("removedMembers").get<std::vector<ClubMember>>(); 
    v.invitedMembers = j.at("invitedMembers").get<std::vector<ClubMember>>(); 
    v.activeMembers = j.at("activeMembers").get<std::vector<ClubMember>>(); 
  }
}