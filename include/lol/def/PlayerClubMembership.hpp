#pragma once
#include "../base_def.hpp" 
#include "ClubPreferences.hpp"
#include "ClubPlayer.hpp"
#include "Club.hpp"
#include "ClubsConfig.hpp"
#include "PlayerClub.hpp"
#include "ClubInvite.hpp"
namespace lol {
  struct PlayerClubMembership { 
    ClubsConfig clubsServerConfig;
    ClubPreferences preferences;
    ClubPlayer info;
    std::string secureClubPresenceInfoString;
    std::vector<Club> removedClubs;
    std::vector<ClubInvite> pendingInvites;
    std::vector<Club> revokedInviteClubs;
    std::vector<PlayerClub> activeClubs; 
  };
  inline void to_json(json& j, const PlayerClubMembership& v) {
    j["clubsServerConfig"] = v.clubsServerConfig; 
    j["preferences"] = v.preferences; 
    j["info"] = v.info; 
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString; 
    j["removedClubs"] = v.removedClubs; 
    j["pendingInvites"] = v.pendingInvites; 
    j["revokedInviteClubs"] = v.revokedInviteClubs; 
    j["activeClubs"] = v.activeClubs; 
  }
  inline void from_json(const json& j, PlayerClubMembership& v) {
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsConfig>(); 
    v.preferences = j.at("preferences").get<ClubPreferences>(); 
    v.info = j.at("info").get<ClubPlayer>(); 
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>(); 
    v.removedClubs = j.at("removedClubs").get<std::vector<Club>>(); 
    v.pendingInvites = j.at("pendingInvites").get<std::vector<ClubInvite>>(); 
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<Club>>(); 
    v.activeClubs = j.at("activeClubs").get<std::vector<PlayerClub>>(); 
  }
}