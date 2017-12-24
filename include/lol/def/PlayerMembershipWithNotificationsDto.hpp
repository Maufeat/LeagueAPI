#pragma once
#include "../base_def.hpp" 
#include "PlayerMembershipDto.hpp"
#include "MembershipNoficationsDto.hpp"
namespace lol {
  struct PlayerMembershipWithNotificationsDto { 
    PlayerMembershipDto playerMembership;
    std::vector<MembershipNoficationsDto> membershipNotifications; 
  };
  inline void to_json(json& j, const PlayerMembershipWithNotificationsDto& v) {
    j["playerMembership"] = v.playerMembership; 
    j["membershipNotifications"] = v.membershipNotifications; 
  }
  inline void from_json(const json& j, PlayerMembershipWithNotificationsDto& v) {
    v.playerMembership = j.at("playerMembership").get<PlayerMembershipDto>(); 
    v.membershipNotifications = j.at("membershipNotifications").get<std::vector<MembershipNoficationsDto>>(); 
  }
}