#pragma once
#include "../base_def.hpp" 
#include "LolClubsPublicClubPreferences.hpp"
#include "LolClubsPublicClubPlayer.hpp"
#include "LolClubsPublicPlayerClub.hpp"
namespace lol {
  struct LolClubsPublicPlayerClubMembership { 
    std::vector<LolClubsPublicPlayerClub> activeClubs;
    LolClubsPublicClubPlayer info;
    std::string secureClubPresenceInfoString;
    LolClubsPublicClubPreferences preferences; 
  };
  inline void to_json(json& j, const LolClubsPublicPlayerClubMembership& v) {
    j["activeClubs"] = v.activeClubs; 
    j["info"] = v.info; 
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString; 
    j["preferences"] = v.preferences; 
  }
  inline void from_json(const json& j, LolClubsPublicPlayerClubMembership& v) {
    v.activeClubs = j.at("activeClubs").get<std::vector<LolClubsPublicPlayerClub>>(); 
    v.info = j.at("info").get<LolClubsPublicClubPlayer>(); 
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>(); 
    v.preferences = j.at("preferences").get<LolClubsPublicClubPreferences>(); 
  }
}