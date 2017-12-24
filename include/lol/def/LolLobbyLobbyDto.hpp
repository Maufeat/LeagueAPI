#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyInvitationDto.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
#include "LolLobbyLobbyGameConfigDto.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
namespace lol {
  struct LolLobbyLobbyDto { 
    std::vector<LolLobbyLobbyParticipantDto> members;
    std::string chatRoomKey;
    LolLobbyLobbyParticipantDto localMember;
    std::vector<LolLobbyLobbyInvitationDto> invitations;
    std::string chatRoomId;
    LolLobbyLobbyGameConfigDto gameConfig;
    std::string partyId;
    bool canStartActivity;
    std::optional<std::vector<LolLobbyEligibilityRestriction>> restrictions; 
  };
  inline void to_json(json& j, const LolLobbyLobbyDto& v) {
    j["members"] = v.members; 
    j["chatRoomKey"] = v.chatRoomKey; 
    j["localMember"] = v.localMember; 
    j["invitations"] = v.invitations; 
    j["chatRoomId"] = v.chatRoomId; 
    j["gameConfig"] = v.gameConfig; 
    j["partyId"] = v.partyId; 
    j["canStartActivity"] = v.canStartActivity; 
    if(v.restrictions)
      j["restrictions"] = *v.restrictions;
  }
  inline void from_json(const json& j, LolLobbyLobbyDto& v) {
    v.members = j.at("members").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>(); 
    v.localMember = j.at("localMember").get<LolLobbyLobbyParticipantDto>(); 
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitationDto>>(); 
    v.chatRoomId = j.at("chatRoomId").get<std::string>(); 
    v.gameConfig = j.at("gameConfig").get<LolLobbyLobbyGameConfigDto>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
    v.canStartActivity = j.at("canStartActivity").get<bool>(); 
    if(auto it = j.find("restrictions"); it != j.end() && !it->is_null())
      v.restrictions = it->get<std::optional<std::vector<LolLobbyEligibilityRestriction>>>(); 
  }
}