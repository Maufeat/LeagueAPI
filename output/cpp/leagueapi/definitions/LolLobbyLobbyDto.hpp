#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyLobbyParticipantDto.hpp>
#include <leagueapi/definitions/LolLobbyEligibilityRestriction.hpp>
#include <leagueapi/definitions/LolLobbyLobbyGameConfigDto.hpp>
#include <leagueapi/definitions/LolLobbyLobbyInvitationDto.hpp>

namespace leagueapi {
  struct LolLobbyLobbyDto { /**/ 
    std::string chatRoomId;/**/
    bool canStartActivity;/**/
    LolLobbyLobbyGameConfigDto gameConfig;/**/
    LolLobbyLobbyParticipantDto localMember;/**/
    std::vector<LolLobbyLobbyInvitationDto> invitations;/**/
    std::optional<std::vector<LolLobbyEligibilityRestriction>> restrictions;/**/
    std::string partyId;/**/
    std::string chatRoomKey;/**/
    std::vector<LolLobbyLobbyParticipantDto> members;/**/
  };
  static void to_json(json& j, const LolLobbyLobbyDto& v) { 
    j["chatRoomId"] = v.chatRoomId;
    j["canStartActivity"] = v.canStartActivity;
    j["gameConfig"] = v.gameConfig;
    j["localMember"] = v.localMember;
    j["invitations"] = v.invitations;
    j["restrictions"] = v.restrictions;
    j["partyId"] = v.partyId;
    j["chatRoomKey"] = v.chatRoomKey;
    j["members"] = v.members;
  }
  static void from_json(const json& j, LolLobbyLobbyDto& v) { 
    v.chatRoomId = j.at("chatRoomId").get<std::string>(); 
    v.canStartActivity = j.at("canStartActivity").get<bool>(); 
    v.gameConfig = j.at("gameConfig").get<LolLobbyLobbyGameConfigDto>(); 
    v.localMember = j.at("localMember").get<LolLobbyLobbyParticipantDto>(); 
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitationDto>>(); 
    v.restrictions = j.at("restrictions").get<std::optional<std::vector<LolLobbyEligibilityRestriction>>>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>(); 
    v.members = j.at("members").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
  }
} 