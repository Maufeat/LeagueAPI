#pragma once
#include "../base_def.hpp" 
#include "MembershipNoficationsDto.hpp"
#include "PlayerMembershipDto.hpp"
namespace lol {
  struct PlayerMembershipWithNotificationsDto { 
    std::vector<MembershipNoficationsDto> membershipNotifications;
    PlayerMembershipDto playerMembership; 
  };
  inline void to_json(json& j, const PlayerMembershipWithNotificationsDto& v) {
    j["membershipNotifications"] = v.membershipNotifications; 
    j["playerMembership"] = v.playerMembership; 
  }
  inline void from_json(const json& j, PlayerMembershipWithNotificationsDto& v) {
    v.membershipNotifications = j.at("membershipNotifications").get<std::vector<MembershipNoficationsDto>>(); 
    v.playerMembership = j.at("playerMembership").get<PlayerMembershipDto>(); 
  }
}