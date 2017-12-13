#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PlayerMembershipDto.hpp>
#include <lol/def/MembershipNoficationsDto.hpp>
namespace lol {
  struct PlayerMembershipWithNotificationsDto { 
    std::vector<MembershipNoficationsDto> membershipNotifications;
    PlayerMembershipDto playerMembership; 
  };
  void to_json(json& j, const PlayerMembershipWithNotificationsDto& v) {
  j["membershipNotifications"] = v.membershipNotifications; 
  j["playerMembership"] = v.playerMembership; 
  }
  void from_json(const json& j, PlayerMembershipWithNotificationsDto& v) {
  v.membershipNotifications = j.at("membershipNotifications").get<std::vector<MembershipNoficationsDto>>(); 
  v.playerMembership = j.at("playerMembership").get<PlayerMembershipDto>(); 
  }
}