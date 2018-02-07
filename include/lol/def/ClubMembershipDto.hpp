#pragma once
#include "../base_def.hpp" 
#include "MemberSinceDto.hpp"
namespace lol {
  struct ClubMembershipDto { 
    std::string clubKey;
    std::vector<MemberSinceDto> activeMembers;
    std::vector<MemberSinceDto> invitedMembers;
    std::vector<MemberSinceDto> removedMembers;
    std::vector<MemberSinceDto> nominatedMembers; 
  };
  inline void to_json(json& j, const ClubMembershipDto& v) {
    j["clubKey"] = v.clubKey; 
    j["activeMembers"] = v.activeMembers; 
    j["invitedMembers"] = v.invitedMembers; 
    j["removedMembers"] = v.removedMembers; 
    j["nominatedMembers"] = v.nominatedMembers; 
  }
  inline void from_json(const json& j, ClubMembershipDto& v) {
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.activeMembers = j.at("activeMembers").get<std::vector<MemberSinceDto>>(); 
    v.invitedMembers = j.at("invitedMembers").get<std::vector<MemberSinceDto>>(); 
    v.removedMembers = j.at("removedMembers").get<std::vector<MemberSinceDto>>(); 
    v.nominatedMembers = j.at("nominatedMembers").get<std::vector<MemberSinceDto>>(); 
  }
}