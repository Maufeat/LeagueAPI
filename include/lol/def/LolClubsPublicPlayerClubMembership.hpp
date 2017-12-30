#pragma once
#include "../base_def.hpp" 
#include "LolClubsPublicPlayerClub.hpp"
#include "LolClubsPublicClubPreferences.hpp"
#include "LolClubsPublicClubPlayer.hpp"
namespace lol {
  struct LolClubsPublicPlayerClubMembership { 
    std::string secureClubPresenceInfoString;
    LolClubsPublicClubPreferences preferences;
    std::vector<LolClubsPublicPlayerClub> activeClubs;
    LolClubsPublicClubPlayer info; 
  };
  inline void to_json(json& j, const LolClubsPublicPlayerClubMembership& v) {
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString; 
    j["preferences"] = v.preferences; 
    j["activeClubs"] = v.activeClubs; 
    j["info"] = v.info; 
  }
  inline void from_json(const json& j, LolClubsPublicPlayerClubMembership& v) {
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>(); 
    v.preferences = j.at("preferences").get<LolClubsPublicClubPreferences>(); 
    v.activeClubs = j.at("activeClubs").get<std::vector<LolClubsPublicPlayerClub>>(); 
    v.info = j.at("info").get<LolClubsPublicClubPlayer>(); 
  }
}