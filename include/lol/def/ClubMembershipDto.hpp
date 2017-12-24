#pragma once
#include "../base_def.hpp" 
#include "MemberSinceDto.hpp"
namespace lol {
  struct ClubMembershipDto { 
    std::vector<MemberSinceDto> invitedMembers;
    std::string clubKey;
    std::vector<MemberSinceDto> removedMembers;
    std::vector<MemberSinceDto> nominatedMembers;
    std::vector<MemberSinceDto> activeMembers; 
  };
  inline void to_json(json& j, const ClubMembershipDto& v) {
    j["invitedMembers"] = v.invitedMembers; 
    j["clubKey"] = v.clubKey; 
    j["removedMembers"] = v.removedMembers; 
    j["nominatedMembers"] = v.nominatedMembers; 
    j["activeMembers"] = v.activeMembers; 
  }
  inline void from_json(const json& j, ClubMembershipDto& v) {
    v.invitedMembers = j.at("invitedMembers").get<std::vector<MemberSinceDto>>(); 
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.removedMembers = j.at("removedMembers").get<std::vector<MemberSinceDto>>(); 
    v.nominatedMembers = j.at("nominatedMembers").get<std::vector<MemberSinceDto>>(); 
    v.activeMembers = j.at("activeMembers").get<std::vector<MemberSinceDto>>(); 
  }
}