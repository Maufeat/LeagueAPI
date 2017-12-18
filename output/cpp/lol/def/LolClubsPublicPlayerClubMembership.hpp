#pragma once
#include "../base_def.hpp" 
#include "LolClubsPublicPlayerClub.hpp"
#include "LolClubsPublicClubPlayer.hpp"
#include "LolClubsPublicClubPreferences.hpp"
namespace lol {
  struct LolClubsPublicPlayerClubMembership { 
    LolClubsPublicClubPreferences preferences;
    std::vector<LolClubsPublicPlayerClub> activeClubs;
    std::string secureClubPresenceInfoString;
    LolClubsPublicClubPlayer info; 
  };
  inline void to_json(json& j, const LolClubsPublicPlayerClubMembership& v) {
    j["preferences"] = v.preferences; 
    j["activeClubs"] = v.activeClubs; 
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString; 
    j["info"] = v.info; 
  }
  inline void from_json(const json& j, LolClubsPublicPlayerClubMembership& v) {
    v.preferences = j.at("preferences").get<LolClubsPublicClubPreferences>(); 
    v.activeClubs = j.at("activeClubs").get<std::vector<LolClubsPublicPlayerClub>>(); 
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>(); 
    v.info = j.at("info").get<LolClubsPublicClubPlayer>(); 
  }
}