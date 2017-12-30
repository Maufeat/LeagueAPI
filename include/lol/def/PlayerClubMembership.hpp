#pragma once
#include "../base_def.hpp" 
#include "ClubPlayer.hpp"
#include "PlayerClub.hpp"
#include "ClubsConfig.hpp"
#include "ClubPreferences.hpp"
#include "ClubInvite.hpp"
#include "Club.hpp"
namespace lol {
  struct PlayerClubMembership { 
    ClubsConfig clubsServerConfig;
    std::vector<Club> revokedInviteClubs;
    ClubPreferences preferences;
    std::string secureClubPresenceInfoString;
    std::vector<Club> removedClubs;
    std::vector<ClubInvite> pendingInvites;
    std::vector<PlayerClub> activeClubs;
    ClubPlayer info; 
  };
  inline void to_json(json& j, const PlayerClubMembership& v) {
    j["clubsServerConfig"] = v.clubsServerConfig; 
    j["revokedInviteClubs"] = v.revokedInviteClubs; 
    j["preferences"] = v.preferences; 
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString; 
    j["removedClubs"] = v.removedClubs; 
    j["pendingInvites"] = v.pendingInvites; 
    j["activeClubs"] = v.activeClubs; 
    j["info"] = v.info; 
  }
  inline void from_json(const json& j, PlayerClubMembership& v) {
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsConfig>(); 
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<Club>>(); 
    v.preferences = j.at("preferences").get<ClubPreferences>(); 
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>(); 
    v.removedClubs = j.at("removedClubs").get<std::vector<Club>>(); 
    v.pendingInvites = j.at("pendingInvites").get<std::vector<ClubInvite>>(); 
    v.activeClubs = j.at("activeClubs").get<std::vector<PlayerClub>>(); 
    v.info = j.at("info").get<ClubPlayer>(); 
  }
}