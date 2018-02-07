#pragma once
#include "../base_def.hpp" 
#include "Club.hpp"
#include "ClubPreferences.hpp"
#include "ClubPlayer.hpp"
#include "PlayerClub.hpp"
#include "ClubInvite.hpp"
#include "ClubsConfig.hpp"
namespace lol {
  struct PlayerClubMembership { 
    ClubPlayer info;
    std::vector<PlayerClub> activeClubs;
    std::vector<ClubInvite> pendingInvites;
    std::vector<Club> removedClubs;
    std::vector<Club> revokedInviteClubs;
    ClubsConfig clubsServerConfig;
    ClubPreferences preferences;
    std::string secureClubPresenceInfoString; 
  };
  inline void to_json(json& j, const PlayerClubMembership& v) {
    j["info"] = v.info; 
    j["activeClubs"] = v.activeClubs; 
    j["pendingInvites"] = v.pendingInvites; 
    j["removedClubs"] = v.removedClubs; 
    j["revokedInviteClubs"] = v.revokedInviteClubs; 
    j["clubsServerConfig"] = v.clubsServerConfig; 
    j["preferences"] = v.preferences; 
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString; 
  }
  inline void from_json(const json& j, PlayerClubMembership& v) {
    v.info = j.at("info").get<ClubPlayer>(); 
    v.activeClubs = j.at("activeClubs").get<std::vector<PlayerClub>>(); 
    v.pendingInvites = j.at("pendingInvites").get<std::vector<ClubInvite>>(); 
    v.removedClubs = j.at("removedClubs").get<std::vector<Club>>(); 
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<Club>>(); 
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsConfig>(); 
    v.preferences = j.at("preferences").get<ClubPreferences>(); 
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>(); 
  }
}