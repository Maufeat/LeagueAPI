#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolClubsPublicClubPreferences.hpp>
#include <leagueapi/definitions/LolClubsPublicClubPlayer.hpp>
#include <leagueapi/definitions/LolClubsPublicPlayerClub.hpp>

namespace leagueapi {
  struct LolClubsPublicPlayerClubMembership { /**/ 
    LolClubsPublicClubPreferences preferences;/**/
    std::vector<LolClubsPublicPlayerClub> activeClubs;/**/
    LolClubsPublicClubPlayer info;/**/
    std::string secureClubPresenceInfoString;/**/
  };
  static void to_json(json& j, const LolClubsPublicPlayerClubMembership& v) { 
    j["preferences"] = v.preferences;
    j["activeClubs"] = v.activeClubs;
    j["info"] = v.info;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
  }
  static void from_json(const json& j, LolClubsPublicPlayerClubMembership& v) { 
    v.preferences = j.at("preferences").get<LolClubsPublicClubPreferences>(); 
    v.activeClubs = j.at("activeClubs").get<std::vector<LolClubsPublicPlayerClub>>(); 
    v.info = j.at("info").get<LolClubsPublicClubPlayer>(); 
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>(); 
  }
} 