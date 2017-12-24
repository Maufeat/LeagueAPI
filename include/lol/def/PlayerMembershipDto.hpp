#pragma once
#include "../base_def.hpp" 
#include "ClubReferenceDto.hpp"
#include "ClubDto.hpp"
#include "PlayerMembershipPreferencesDto.hpp"
#include "MembershipInviteDto.hpp"
#include "PlayerInfoDto.hpp"
#include "ClubsServerConfigDto.hpp"
namespace lol {
  struct PlayerMembershipDto { 
    std::string secureClubPresenceInfoString;
    PlayerInfoDto player;
    std::vector<ClubReferenceDto> revokedInviteClubs;
    std::vector<ClubReferenceDto> removedClubs;
    std::string resourceUri;
    std::vector<ClubDto> activeClubs;
    ClubsServerConfigDto clubsServerConfig;
    std::vector<MembershipInviteDto> pendingInvites;
    PlayerMembershipPreferencesDto playerClubPreferences; 
  };
  inline void to_json(json& j, const PlayerMembershipDto& v) {
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString; 
    j["player"] = v.player; 
    j["revokedInviteClubs"] = v.revokedInviteClubs; 
    j["removedClubs"] = v.removedClubs; 
    j["resourceUri"] = v.resourceUri; 
    j["activeClubs"] = v.activeClubs; 
    j["clubsServerConfig"] = v.clubsServerConfig; 
    j["pendingInvites"] = v.pendingInvites; 
    j["playerClubPreferences"] = v.playerClubPreferences; 
  }
  inline void from_json(const json& j, PlayerMembershipDto& v) {
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>(); 
    v.player = j.at("player").get<PlayerInfoDto>(); 
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<ClubReferenceDto>>(); 
    v.removedClubs = j.at("removedClubs").get<std::vector<ClubReferenceDto>>(); 
    v.resourceUri = j.at("resourceUri").get<std::string>(); 
    v.activeClubs = j.at("activeClubs").get<std::vector<ClubDto>>(); 
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsServerConfigDto>(); 
    v.pendingInvites = j.at("pendingInvites").get<std::vector<MembershipInviteDto>>(); 
    v.playerClubPreferences = j.at("playerClubPreferences").get<PlayerMembershipPreferencesDto>(); 
  }
}