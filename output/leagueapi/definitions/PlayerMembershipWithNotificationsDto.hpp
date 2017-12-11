#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/PlayerMembershipDto.hpp>"
#include "<leagueapi/definitions/MembershipNoficationsDto.hpp>"

namespace leagueapi {
  struct PlayerMembershipWithNotificationsDto { /**/ 
    std::vector<MembershipNoficationsDto> membershipNotifications;/**/
    PlayerMembershipDto playerMembership;/**/
  };
  static void to_json(json& j, const PlayerMembershipWithNotificationsDto& v) { 
    j["membershipNotifications"] = v.membershipNotifications;
    j["playerMembership"] = v.playerMembership;
  }
  static void from_json(const json& j, PlayerMembershipWithNotificationsDto& v) { 
    v.membershipNotifications = j.at("membershipNotifications").get<std::vector<MembershipNoficationsDto>>(); 
    v.playerMembership = j.at("playerMembership").get<PlayerMembershipDto>(); 
  }
} 