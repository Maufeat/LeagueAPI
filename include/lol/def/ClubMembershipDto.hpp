#pragma once
#include "../base_def.hpp" 
#include "MemberSinceDto.hpp"
namespace lol {
  struct ClubMembershipDto { 
    std::vector<MemberSinceDto> activeMembers;
    std::vector<MemberSinceDto> invitedMembers;
    std::string clubKey;
    std::vector<MemberSinceDto> nominatedMembers;
    std::vector<MemberSinceDto> removedMembers; 
  };
  inline void to_json(json& j, const ClubMembershipDto& v) {
    j["activeMembers"] = v.activeMembers; 
    j["invitedMembers"] = v.invitedMembers; 
    j["clubKey"] = v.clubKey; 
    j["nominatedMembers"] = v.nominatedMembers; 
    j["removedMembers"] = v.removedMembers; 
  }
  inline void from_json(const json& j, ClubMembershipDto& v) {
    v.activeMembers = j.at("activeMembers").get<std::vector<MemberSinceDto>>(); 
    v.invitedMembers = j.at("invitedMembers").get<std::vector<MemberSinceDto>>(); 
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.nominatedMembers = j.at("nominatedMembers").get<std::vector<MemberSinceDto>>(); 
    v.removedMembers = j.at("removedMembers").get<std::vector<MemberSinceDto>>(); 
  }
}