#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolClubsPublicClubPlayer.hpp>"

namespace leagueapi {
  struct LolClubsPublicClubMemberLists { /**/ 
    std::vector<LolClubsPublicClubPlayer> activeMembers;/**/
  };
  static void to_json(json& j, const LolClubsPublicClubMemberLists& v) { 
    j["activeMembers"] = v.activeMembers;
  }
  static void from_json(const json& j, LolClubsPublicClubMemberLists& v) { 
    v.activeMembers = j.at("activeMembers").get<std::vector<LolClubsPublicClubPlayer>>(); 
  }
} 