#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PlayerMembershipPreferencesDto { /**/ 
    bool shareClubAffiliation;/**/
    std::string primaryActiveClubKey;/**/
  };
  static void to_json(json& j, const PlayerMembershipPreferencesDto& v) { 
    j["shareClubAffiliation"] = v.shareClubAffiliation;
    j["primaryActiveClubKey"] = v.primaryActiveClubKey;
  }
  static void from_json(const json& j, PlayerMembershipPreferencesDto& v) { 
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>(); 
    v.primaryActiveClubKey = j.at("primaryActiveClubKey").get<std::string>(); 
  }
} 