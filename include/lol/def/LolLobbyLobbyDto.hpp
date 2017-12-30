#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyInvitationDto.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
#include "LolLobbyLobbyGameConfigDto.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
namespace lol {
  struct LolLobbyLobbyDto { 
    std::vector<LolLobbyLobbyInvitationDto> invitations;
    std::string partyId;
    std::string chatRoomId;
    LolLobbyLobbyParticipantDto localMember;
    LolLobbyLobbyGameConfigDto gameConfig;
    std::optional<std::vector<LolLobbyEligibilityRestriction>> restrictions;
    std::vector<LolLobbyLobbyParticipantDto> members;
    bool canStartActivity;
    std::string chatRoomKey; 
  };
  inline void to_json(json& j, const LolLobbyLobbyDto& v) {
    j["invitations"] = v.invitations; 
    j["partyId"] = v.partyId; 
    j["chatRoomId"] = v.chatRoomId; 
    j["localMember"] = v.localMember; 
    j["gameConfig"] = v.gameConfig; 
    if(v.restrictions)
      j["restrictions"] = *v.restrictions;
    j["members"] = v.members; 
    j["canStartActivity"] = v.canStartActivity; 
    j["chatRoomKey"] = v.chatRoomKey; 
  }
  inline void from_json(const json& j, LolLobbyLobbyDto& v) {
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitationDto>>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
    v.chatRoomId = j.at("chatRoomId").get<std::string>(); 
    v.localMember = j.at("localMember").get<LolLobbyLobbyParticipantDto>(); 
    v.gameConfig = j.at("gameConfig").get<LolLobbyLobbyGameConfigDto>(); 
    if(auto it = j.find("restrictions"); it != j.end() && !it->is_null())
      v.restrictions = it->get<std::optional<std::vector<LolLobbyEligibilityRestriction>>>(); 
    v.members = j.at("members").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.canStartActivity = j.at("canStartActivity").get<bool>(); 
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>(); 
  }
}