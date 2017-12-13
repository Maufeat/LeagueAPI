#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MembershipInviteDto.hpp>
#include <lol/def/PlayerInfoDto.hpp>
#include <lol/def/ClubsServerConfigDto.hpp>
#include <lol/def/ClubReferenceDto.hpp>
#include <lol/def/PlayerMembershipPreferencesDto.hpp>
#include <lol/def/ClubDto.hpp>
namespace lol {
  struct PlayerMembershipDto { 
    std::vector<MembershipInviteDto> pendingInvites;
    std::vector<ClubReferenceDto> removedClubs;
    std::vector<ClubReferenceDto> revokedInviteClubs;
    PlayerMembershipPreferencesDto playerClubPreferences;
    ClubsServerConfigDto clubsServerConfig;
    PlayerInfoDto player;
    std::vector<ClubDto> activeClubs;
    std::string secureClubPresenceInfoString;
    std::string resourceUri; 
  };
  void to_json(json& j, const PlayerMembershipDto& v) {
  j["pendingInvites"] = v.pendingInvites; 
  j["removedClubs"] = v.removedClubs; 
  j["revokedInviteClubs"] = v.revokedInviteClubs; 
  j["playerClubPreferences"] = v.playerClubPreferences; 
  j["clubsServerConfig"] = v.clubsServerConfig; 
  j["player"] = v.player; 
  j["activeClubs"] = v.activeClubs; 
  j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString; 
  j["resourceUri"] = v.resourceUri; 
  }
  void from_json(const json& j, PlayerMembershipDto& v) {
  v.pendingInvites = j.at("pendingInvites").get<std::vector<MembershipInviteDto>>(); 
  v.removedClubs = j.at("removedClubs").get<std::vector<ClubReferenceDto>>(); 
  v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<ClubReferenceDto>>(); 
  v.playerClubPreferences = j.at("playerClubPreferences").get<PlayerMembershipPreferencesDto>(); 
  v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsServerConfigDto>(); 
  v.player = j.at("player").get<PlayerInfoDto>(); 
  v.activeClubs = j.at("activeClubs").get<std::vector<ClubDto>>(); 
  v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>(); 
  v.resourceUri = j.at("resourceUri").get<std::string>(); 
  }
}