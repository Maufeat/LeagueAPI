#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ClubPreferences { /**/ 
    std::string primaryClubKey;/**/
    bool shareClubAffiliation;/**/
  };
  static void to_json(json& j, const ClubPreferences& v) { 
    j["primaryClubKey"] = v.primaryClubKey;
    j["shareClubAffiliation"] = v.shareClubAffiliation;
  }
  static void from_json(const json& j, ClubPreferences& v) { 
    v.primaryClubKey = j.at("primaryClubKey").get<std::string>(); 
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>(); 
  }
} 