#pragma once
#include "../base_def.hpp" 
#include "ClubPlayer.hpp"
#include "PlayerClub.hpp"
#include "ClubPreferences.hpp"
#include "Club.hpp"
#include "ClubInvite.hpp"
#include "ClubsConfig.hpp"
namespace lol {
  struct PlayerClubMembership { 
    ClubPlayer info;
    std::vector<Club> revokedInviteClubs;
    std::vector<Club> removedClubs;
    ClubPreferences preferences;
    std::vector<PlayerClub> activeClubs;
    ClubsConfig clubsServerConfig;
    std::vector<ClubInvite> pendingInvites;
    std::string secureClubPresenceInfoString; 
  };
  inline void to_json(json& j, const PlayerClubMembership& v) {
    j["info"] = v.info; 
    j["revokedInviteClubs"] = v.revokedInviteClubs; 
    j["removedClubs"] = v.removedClubs; 
    j["preferences"] = v.preferences; 
    j["activeClubs"] = v.activeClubs; 
    j["clubsServerConfig"] = v.clubsServerConfig; 
    j["pendingInvites"] = v.pendingInvites; 
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString; 
  }
  inline void from_json(const json& j, PlayerClubMembership& v) {
    v.info = j.at("info").get<ClubPlayer>(); 
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<Club>>(); 
    v.removedClubs = j.at("removedClubs").get<std::vector<Club>>(); 
    v.preferences = j.at("preferences").get<ClubPreferences>(); 
    v.activeClubs = j.at("activeClubs").get<std::vector<PlayerClub>>(); 
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsConfig>(); 
    v.pendingInvites = j.at("pendingInvites").get<std::vector<ClubInvite>>(); 
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>(); 
  }
}