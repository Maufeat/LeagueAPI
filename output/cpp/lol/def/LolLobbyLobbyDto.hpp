#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyGameConfigDto.hpp>
#include <lol/def/LolLobbyLobbyParticipantDto.hpp>
#include <lol/def/LolLobbyLobbyInvitationDto.hpp>
#include <lol/def/LolLobbyEligibilityRestriction.hpp>
namespace lol {
  struct LolLobbyLobbyDto { 
    std::vector<LolLobbyLobbyParticipantDto> members;
    std::string chatRoomKey;
    LolLobbyLobbyGameConfigDto gameConfig;
    std::optional<std::vector<LolLobbyEligibilityRestriction>> restrictions;
    std::string partyId;
    LolLobbyLobbyParticipantDto localMember;
    std::string chatRoomId;
    std::vector<LolLobbyLobbyInvitationDto> invitations;
    bool canStartActivity; 
  };
  void to_json(json& j, const LolLobbyLobbyDto& v) {
  j["members"] = v.members; 
  j["chatRoomKey"] = v.chatRoomKey; 
  j["gameConfig"] = v.gameConfig; 
  j["restrictions"] = v.restrictions; 
  j["partyId"] = v.partyId; 
  j["localMember"] = v.localMember; 
  j["chatRoomId"] = v.chatRoomId; 
  j["invitations"] = v.invitations; 
  j["canStartActivity"] = v.canStartActivity; 
  }
  void from_json(const json& j, LolLobbyLobbyDto& v) {
  v.members = j.at("members").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
  v.chatRoomKey = j.at("chatRoomKey").get<std::string>(); 
  v.gameConfig = j.at("gameConfig").get<LolLobbyLobbyGameConfigDto>(); 
  v.restrictions = j.at("restrictions").get<std::optional<std::vector<LolLobbyEligibilityRestriction>>>(); 
  v.partyId = j.at("partyId").get<std::string>(); 
  v.localMember = j.at("localMember").get<LolLobbyLobbyParticipantDto>(); 
  v.chatRoomId = j.at("chatRoomId").get<std::string>(); 
  v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitationDto>>(); 
  v.canStartActivity = j.at("canStartActivity").get<bool>(); 
  }
}