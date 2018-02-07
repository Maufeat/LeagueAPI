#pragma once
#include "../base_def.hpp" 
#include "ClubsServerConfigDto.hpp"
#include "ClubDto.hpp"
#include "PlayerMembershipPreferencesDto.hpp"
#include "ClubReferenceDto.hpp"
#include "PlayerInfoDto.hpp"
#include "MembershipInviteDto.hpp"
namespace lol {
  struct PlayerMembershipDto { 
    PlayerInfoDto player;
    std::vector<ClubDto> activeClubs;
    std::vector<MembershipInviteDto> pendingInvites;
    std::vector<ClubReferenceDto> removedClubs;
    std::vector<ClubReferenceDto> revokedInviteClubs;
    std::string resourceUri;
    ClubsServerConfigDto clubsServerConfig;
    PlayerMembershipPreferencesDto playerClubPreferences;
    std::string secureClubPresenceInfoString; 
  };
  inline void to_json(json& j, const PlayerMembershipDto& v) {
    j["player"] = v.player; 
    j["activeClubs"] = v.activeClubs; 
    j["pendingInvites"] = v.pendingInvites; 
    j["removedClubs"] = v.removedClubs; 
    j["revokedInviteClubs"] = v.revokedInviteClubs; 
    j["resourceUri"] = v.resourceUri; 
    j["clubsServerConfig"] = v.clubsServerConfig; 
    j["playerClubPreferences"] = v.playerClubPreferences; 
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString; 
  }
  inline void from_json(const json& j, PlayerMembershipDto& v) {
    v.player = j.at("player").get<PlayerInfoDto>(); 
    v.activeClubs = j.at("activeClubs").get<std::vector<ClubDto>>(); 
    v.pendingInvites = j.at("pendingInvites").get<std::vector<MembershipInviteDto>>(); 
    v.removedClubs = j.at("removedClubs").get<std::vector<ClubReferenceDto>>(); 
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<ClubReferenceDto>>(); 
    v.resourceUri = j.at("resourceUri").get<std::string>(); 
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsServerConfigDto>(); 
    v.playerClubPreferences = j.at("playerClubPreferences").get<PlayerMembershipPreferencesDto>(); 
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>(); 
  }
}