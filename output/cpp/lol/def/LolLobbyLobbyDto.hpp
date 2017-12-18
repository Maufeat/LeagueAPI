#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyGameConfigDto.hpp"
#include "LolLobbyLobbyInvitationDto.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
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
  inline void to_json(json& j, const LolLobbyLobbyDto& v) {
    j["members"] = v.members; 
    j["chatRoomKey"] = v.chatRoomKey; 
    j["gameConfig"] = v.gameConfig; 
    if(v.restrictions)
      j["restrictions"] = *v.restrictions;
    j["partyId"] = v.partyId; 
    j["localMember"] = v.localMember; 
    j["chatRoomId"] = v.chatRoomId; 
    j["invitations"] = v.invitations; 
    j["canStartActivity"] = v.canStartActivity; 
  }
  inline void from_json(const json& j, LolLobbyLobbyDto& v) {
    v.members = j.at("members").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>(); 
    v.gameConfig = j.at("gameConfig").get<LolLobbyLobbyGameConfigDto>(); 
    if(auto it = j.find("restrictions"); it != j.end() && !it->is_null())
      v.restrictions = it->get<std::optional<std::vector<LolLobbyEligibilityRestriction>>>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
    v.localMember = j.at("localMember").get<LolLobbyLobbyParticipantDto>(); 
    v.chatRoomId = j.at("chatRoomId").get<std::string>(); 
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitationDto>>(); 
    v.canStartActivity = j.at("canStartActivity").get<bool>(); 
  }
}