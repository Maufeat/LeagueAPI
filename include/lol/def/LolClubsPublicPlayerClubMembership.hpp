#pragma once
#include "../base_def.hpp" 
#include "LolClubsPublicClubPreferences.hpp"
#include "LolClubsPublicClubPlayer.hpp"
#include "LolClubsPublicPlayerClub.hpp"
namespace lol {
  struct LolClubsPublicPlayerClubMembership { 
    std::vector<LolClubsPublicPlayerClub> activeClubs;
    LolClubsPublicClubPreferences preferences;
    std::string secureClubPresenceInfoString;
    LolClubsPublicClubPlayer info; 
  };
  inline void to_json(json& j, const LolClubsPublicPlayerClubMembership& v) {
    j["activeClubs"] = v.activeClubs; 
    j["preferences"] = v.preferences; 
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString; 
    j["info"] = v.info; 
  }
  inline void from_json(const json& j, LolClubsPublicPlayerClubMembership& v) {
    v.activeClubs = j.at("activeClubs").get<std::vector<LolClubsPublicPlayerClub>>(); 
    v.preferences = j.at("preferences").get<LolClubsPublicClubPreferences>(); 
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>(); 
    v.info = j.at("info").get<LolClubsPublicClubPlayer>(); 
  }
}