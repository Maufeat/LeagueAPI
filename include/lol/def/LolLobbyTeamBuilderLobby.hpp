#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderLobbyRemovedFromGameReason.hpp"
#include "LolLobbyTeamBuilderLobbyInvitation.hpp"
#include "LolLobbyTeamBuilderLobbyMember.hpp"
namespace lol {
  struct LolLobbyTeamBuilderLobby { 
    std::vector<LolLobbyTeamBuilderLobbyInvitation> invitations;
    bool wasKicked;
    std::string chatRoomKey;
    bool autoFillEligible;
    bool premadeSizeAllowed;
    std::vector<int32_t> allowablePremadeSizes;
    std::vector<LolLobbyTeamBuilderLobbyMember> members;
    bool autoFillProtectedForStreaking;
    bool canStartMatchmaking;
    std::string chatRoomId;
    bool showPositionExcluder;
    std::string invitationId;
    LolLobbyTeamBuilderLobbyMember localMember;
    std::vector<std::string> specifiablePositionPreferences;
    LolLobbyTeamBuilderLobbyRemovedFromGameReason removalReason;
    bool showPositionSelector;
    bool autoFillProtectedForPromos;
    int32_t queueId;
    bool isTeamBuilderManaged;
    bool requiredPositionCoverageMet; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderLobby& v) {
    j["invitations"] = v.invitations; 
    j["wasKicked"] = v.wasKicked; 
    j["chatRoomKey"] = v.chatRoomKey; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["premadeSizeAllowed"] = v.premadeSizeAllowed; 
    j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
    j["members"] = v.members; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["canStartMatchmaking"] = v.canStartMatchmaking; 
    j["chatRoomId"] = v.chatRoomId; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["invitationId"] = v.invitationId; 
    j["localMember"] = v.localMember; 
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences; 
    j["removalReason"] = v.removalReason; 
    j["showPositionSelector"] = v.showPositionSelector; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["queueId"] = v.queueId; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderLobby& v) {
    v.invitations = j.at("invitations").get<std::vector<LolLobbyTeamBuilderLobbyInvitation>>(); 
    v.wasKicked = j.at("wasKicked").get<bool>(); 
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
    v.members = j.at("members").get<std::vector<LolLobbyTeamBuilderLobbyMember>>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>(); 
    v.chatRoomId = j.at("chatRoomId").get<std::string>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.localMember = j.at("localMember").get<LolLobbyTeamBuilderLobbyMember>(); 
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>(); 
    v.removalReason = j.at("removalReason").get<LolLobbyTeamBuilderLobbyRemovedFromGameReason>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>(); 
  }
}