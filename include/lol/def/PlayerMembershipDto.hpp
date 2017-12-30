#pragma once
#include "../base_def.hpp" 
#include "ClubDto.hpp"
#include "ClubReferenceDto.hpp"
#include "ClubsServerConfigDto.hpp"
#include "MembershipInviteDto.hpp"
#include "PlayerMembershipPreferencesDto.hpp"
#include "PlayerInfoDto.hpp"
namespace lol {
  struct PlayerMembershipDto { 
    ClubsServerConfigDto clubsServerConfig;
    std::vector<ClubReferenceDto> removedClubs;
    std::string resourceUri;
    std::vector<ClubReferenceDto> revokedInviteClubs;
    std::vector<MembershipInviteDto> pendingInvites;
    PlayerInfoDto player;
    PlayerMembershipPreferencesDto playerClubPreferences;
    std::vector<ClubDto> activeClubs;
    std::string secureClubPresenceInfoString; 
  };
  inline void to_json(json& j, const PlayerMembershipDto& v) {
    j["clubsServerConfig"] = v.clubsServerConfig; 
    j["removedClubs"] = v.removedClubs; 
    j["resourceUri"] = v.resourceUri; 
    j["revokedInviteClubs"] = v.revokedInviteClubs; 
    j["pendingInvites"] = v.pendingInvites; 
    j["player"] = v.player; 
    j["playerClubPreferences"] = v.playerClubPreferences; 
    j["activeClubs"] = v.activeClubs; 
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString; 
  }
  inline void from_json(const json& j, PlayerMembershipDto& v) {
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsServerConfigDto>(); 
    v.removedClubs = j.at("removedClubs").get<std::vector<ClubReferenceDto>>(); 
    v.resourceUri = j.at("resourceUri").get<std::string>(); 
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<ClubReferenceDto>>(); 
    v.pendingInvites = j.at("pendingInvites").get<std::vector<MembershipInviteDto>>(); 
    v.player = j.at("player").get<PlayerInfoDto>(); 
    v.playerClubPreferences = j.at("playerClubPreferences").get<PlayerMembershipPreferencesDto>(); 
    v.activeClubs = j.at("activeClubs").get<std::vector<ClubDto>>(); 
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>(); 
  }
}