#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClubsPublicPlayerClub.hpp>
#include <lol/def/LolClubsPublicClubPlayer.hpp>
#include <lol/def/LolClubsPublicClubPreferences.hpp>
namespace lol {
  struct LolClubsPublicPlayerClubMembership { 
    LolClubsPublicClubPreferences preferences;
    std::vector<LolClubsPublicPlayerClub> activeClubs;
    LolClubsPublicClubPlayer info;
    std::string secureClubPresenceInfoString; 
  };
  void to_json(json& j, const LolClubsPublicPlayerClubMembership& v) {
  j["preferences"] = v.preferences; 
  j["activeClubs"] = v.activeClubs; 
  j["info"] = v.info; 
  j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString; 
  }
  void from_json(const json& j, LolClubsPublicPlayerClubMembership& v) {
  v.preferences = j.at("preferences").get<LolClubsPublicClubPreferences>(); 
  v.activeClubs = j.at("activeClubs").get<std::vector<LolClubsPublicPlayerClub>>(); 
  v.info = j.at("info").get<LolClubsPublicClubPlayer>(); 
  v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>(); 
  }
}