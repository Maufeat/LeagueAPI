#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyParticipantDto.hpp"
#include "LolLobbyLobbyInvitationDto.hpp"
#include "LolLobbyLobbyGameConfigDto.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
namespace lol {
  struct LolLobbyLobbyDto { 
    std::string partyId;
    std::string partyType;
    std::vector<LolLobbyLobbyParticipantDto> members;
    LolLobbyLobbyParticipantDto localMember;
    std::vector<LolLobbyLobbyInvitationDto> invitations;
    bool canStartActivity;
    std::optional<std::vector<LolLobbyEligibilityRestriction>> restrictions;
    LolLobbyLobbyGameConfigDto gameConfig;
    std::string chatRoomId;
    std::string chatRoomKey; 
  };
  inline void to_json(json& j, const LolLobbyLobbyDto& v) {
    j["partyId"] = v.partyId; 
    j["partyType"] = v.partyType; 
    j["members"] = v.members; 
    j["localMember"] = v.localMember; 
    j["invitations"] = v.invitations; 
    j["canStartActivity"] = v.canStartActivity; 
    if(v.restrictions)
      j["restrictions"] = *v.restrictions;
    j["gameConfig"] = v.gameConfig; 
    j["chatRoomId"] = v.chatRoomId; 
    j["chatRoomKey"] = v.chatRoomKey; 
  }
  inline void from_json(const json& j, LolLobbyLobbyDto& v) {
    v.partyId = j.at("partyId").get<std::string>(); 
    v.partyType = j.at("partyType").get<std::string>(); 
    v.members = j.at("members").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.localMember = j.at("localMember").get<LolLobbyLobbyParticipantDto>(); 
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitationDto>>(); 
    v.canStartActivity = j.at("canStartActivity").get<bool>(); 
    if(auto it = j.find("restrictions"); it != j.end() && !it->is_null())
      v.restrictions = it->get<std::optional<std::vector<LolLobbyEligibilityRestriction>>>(); 
    v.gameConfig = j.at("gameConfig").get<LolLobbyLobbyGameConfigDto>(); 
    v.chatRoomId = j.at("chatRoomId").get<std::string>(); 
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>(); 
  }
}