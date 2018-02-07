#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderLobbyMember.hpp"
#include "LolLobbyTeamBuilderLobbyInvitation.hpp"
#include "LolLobbyTeamBuilderLobbyRemovedFromGameReason.hpp"
namespace lol {
  struct LolLobbyTeamBuilderLobby { 
    int32_t queueId;
    std::string invitationId;
    std::string chatRoomId;
    std::string chatRoomKey;
    std::vector<LolLobbyTeamBuilderLobbyMember> members;
    LolLobbyTeamBuilderLobbyMember localMember;
    std::vector<LolLobbyTeamBuilderLobbyInvitation> invitations;
    bool wasKicked;
    LolLobbyTeamBuilderLobbyRemovedFromGameReason removalReason;
    bool canStartMatchmaking;
    bool showPositionSelector;
    bool showPositionExcluder;
    std::vector<std::string> specifiablePositionPreferences;
    bool autoFillEligible;
    bool autoFillProtectedForStreaking;
    bool autoFillProtectedForPromos;
    bool isTeamBuilderManaged;
    bool premadeSizeAllowed;
    bool requiredPositionCoverageMet;
    std::vector<int32_t> allowablePremadeSizes; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderLobby& v) {
    j["queueId"] = v.queueId; 
    j["invitationId"] = v.invitationId; 
    j["chatRoomId"] = v.chatRoomId; 
    j["chatRoomKey"] = v.chatRoomKey; 
    j["members"] = v.members; 
    j["localMember"] = v.localMember; 
    j["invitations"] = v.invitations; 
    j["wasKicked"] = v.wasKicked; 
    j["removalReason"] = v.removalReason; 
    j["canStartMatchmaking"] = v.canStartMatchmaking; 
    j["showPositionSelector"] = v.showPositionSelector; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
    j["premadeSizeAllowed"] = v.premadeSizeAllowed; 
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet; 
    j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderLobby& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.chatRoomId = j.at("chatRoomId").get<std::string>(); 
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>(); 
    v.members = j.at("members").get<std::vector<LolLobbyTeamBuilderLobbyMember>>(); 
    v.localMember = j.at("localMember").get<LolLobbyTeamBuilderLobbyMember>(); 
    v.invitations = j.at("invitations").get<std::vector<LolLobbyTeamBuilderLobbyInvitation>>(); 
    v.wasKicked = j.at("wasKicked").get<bool>(); 
    v.removalReason = j.at("removalReason").get<LolLobbyTeamBuilderLobbyRemovedFromGameReason>(); 
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
  }
}