#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MemberSinceDto.hpp>
namespace lol {
  struct ClubMembershipDto { 
    std::vector<MemberSinceDto> invitedMembers;
    std::vector<MemberSinceDto> nominatedMembers;
    std::vector<MemberSinceDto> removedMembers;
    std::string clubKey;
    std::vector<MemberSinceDto> activeMembers; 
  };
  void to_json(json& j, const ClubMembershipDto& v) {
    j["invitedMembers"] = v.invitedMembers; 
    j["nominatedMembers"] = v.nominatedMembers; 
    j["removedMembers"] = v.removedMembers; 
    j["clubKey"] = v.clubKey; 
    j["activeMembers"] = v.activeMembers; 
  }
  void from_json(const json& j, ClubMembershipDto& v) {
    v.invitedMembers = j.at("invitedMembers").get<std::vector<MemberSinceDto>>(); 
    v.nominatedMembers = j.at("nominatedMembers").get<std::vector<MemberSinceDto>>(); 
    v.removedMembers = j.at("removedMembers").get<std::vector<MemberSinceDto>>(); 
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.activeMembers = j.at("activeMembers").get<std::vector<MemberSinceDto>>(); 
  }
}