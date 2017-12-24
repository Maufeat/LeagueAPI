#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderLobbyMember.hpp"
#include "LolLobbyTeamBuilderLobbyInvitation.hpp"
#include "LolLobbyTeamBuilderLobbyRemovedFromGameReason.hpp"
namespace lol {
  struct LolLobbyTeamBuilderLobby { 
    bool premadeSizeAllowed;
    std::string chatRoomId;
    bool canStartMatchmaking;
    std::vector<LolLobbyTeamBuilderLobbyInvitation> invitations;
    std::string invitationId;
    bool autoFillProtectedForPromos;
    bool isTeamBuilderManaged;
    std::vector<LolLobbyTeamBuilderLobbyMember> members;
    bool autoFillProtectedForStreaking;
    LolLobbyTeamBuilderLobbyMember localMember;
    int32_t queueId;
    bool autoFillEligible;
    std::vector<int32_t> allowablePremadeSizes;
    bool requiredPositionCoverageMet;
    LolLobbyTeamBuilderLobbyRemovedFromGameReason removalReason;
    bool wasKicked;
    bool showPositionExcluder;
    std::vector<std::string> specifiablePositionPreferences;
    bool showPositionSelector;
    std::string chatRoomKey; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderLobby& v) {
    j["premadeSizeAllowed"] = v.premadeSizeAllowed; 
    j["chatRoomId"] = v.chatRoomId; 
    j["canStartMatchmaking"] = v.canStartMatchmaking; 
    j["invitations"] = v.invitations; 
    j["invitationId"] = v.invitationId; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
    j["members"] = v.members; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["localMember"] = v.localMember; 
    j["queueId"] = v.queueId; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet; 
    j["removalReason"] = v.removalReason; 
    j["wasKicked"] = v.wasKicked; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences; 
    j["showPositionSelector"] = v.showPositionSelector; 
    j["chatRoomKey"] = v.chatRoomKey; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderLobby& v) {
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
    v.chatRoomId = j.at("chatRoomId").get<std::string>(); 
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>(); 
    v.invitations = j.at("invitations").get<std::vector<LolLobbyTeamBuilderLobbyInvitation>>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.members = j.at("members").get<std::vector<LolLobbyTeamBuilderLobbyMember>>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.localMember = j.at("localMember").get<LolLobbyTeamBuilderLobbyMember>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>(); 
    v.removalReason = j.at("removalReason").get<LolLobbyTeamBuilderLobbyRemovedFromGameReason>(); 
    v.wasKicked = j.at("wasKicked").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>(); 
  }
}