#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClubsPublicClubPreferences { /**/ 
    bool shareClubAffiliation;/**/
  };
  static void to_json(json& j, const LolClubsPublicClubPreferences& v) { 
    j["shareClubAffiliation"] = v.shareClubAffiliation;
  }
  static void from_json(const json& j, LolClubsPublicClubPreferences& v) { 
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>(); 
  }
} 