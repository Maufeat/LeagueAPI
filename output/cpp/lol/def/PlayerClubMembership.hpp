#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PlayerClub.hpp>
#include <lol/def/ClubsConfig.hpp>
#include <lol/def/ClubPreferences.hpp>
#include <lol/def/ClubInvite.hpp>
#include <lol/def/Club.hpp>
#include <lol/def/ClubPlayer.hpp>
namespace lol {
  struct PlayerClubMembership { 
    std::vector<ClubInvite> pendingInvites;
    std::vector<Club> removedClubs;
    std::vector<Club> revokedInviteClubs;
    ClubsConfig clubsServerConfig;
    ClubPreferences preferences;
    std::vector<PlayerClub> activeClubs;
    ClubPlayer info;
    std::string secureClubPresenceInfoString; 
  };
  void to_json(json& j, const PlayerClubMembership& v) {
  j["pendingInvites"] = v.pendingInvites; 
  j["removedClubs"] = v.removedClubs; 
  j["revokedInviteClubs"] = v.revokedInviteClubs; 
  j["clubsServerConfig"] = v.clubsServerConfig; 
  j["preferences"] = v.preferences; 
  j["activeClubs"] = v.activeClubs; 
  j["info"] = v.info; 
  j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString; 
  }
  void from_json(const json& j, PlayerClubMembership& v) {
  v.pendingInvites = j.at("pendingInvites").get<std::vector<ClubInvite>>(); 
  v.removedClubs = j.at("removedClubs").get<std::vector<Club>>(); 
  v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<Club>>(); 
  v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsConfig>(); 
  v.preferences = j.at("preferences").get<ClubPreferences>(); 
  v.activeClubs = j.at("activeClubs").get<std::vector<PlayerClub>>(); 
  v.info = j.at("info").get<ClubPlayer>(); 
  v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>(); 
  }
}