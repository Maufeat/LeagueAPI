#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderLobbyInvitation.hpp>
#include <lol/def/LolLobbyTeamBuilderLobbyMember.hpp>
#include <lol/def/LolLobbyTeamBuilderLobbyRemovedFromGameReason.hpp>
namespace lol {
  struct LolLobbyTeamBuilderLobby { 
    bool canStartMatchmaking;
    bool wasKicked;
    std::string chatRoomKey;
    std::string invitationId;
    std::string chatRoomId;
    LolLobbyTeamBuilderLobbyMember localMember;
    int32_t queueId;
    std::vector<LolLobbyTeamBuilderLobbyInvitation> invitations;
    LolLobbyTeamBuilderLobbyRemovedFromGameReason removalReason;
    std::vector<int32_t> allowablePremadeSizes;
    std::vector<LolLobbyTeamBuilderLobbyMember> members;
    bool autoFillEligible;
    bool autoFillProtectedForPromos;
    bool showPositionExcluder;
    bool premadeSizeAllowed;
    bool autoFillProtectedForStreaking;
    bool requiredPositionCoverageMet;
    bool isTeamBuilderManaged;
    std::vector<std::string> specifiablePositionPreferences;
    bool showPositionSelector; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderLobby& v) {
    j["canStartMatchmaking"] = v.canStartMatchmaking; 
    j["wasKicked"] = v.wasKicked; 
    j["chatRoomKey"] = v.chatRoomKey; 
    j["invitationId"] = v.invitationId; 
    j["chatRoomId"] = v.chatRoomId; 
    j["localMember"] = v.localMember; 
    j["queueId"] = v.queueId; 
    j["invitations"] = v.invitations; 
    j["removalReason"] = v.removalReason; 
    j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
    j["members"] = v.members; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["premadeSizeAllowed"] = v.premadeSizeAllowed; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences; 
    j["showPositionSelector"] = v.showPositionSelector; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderLobby& v) {
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>(); 
    v.wasKicked = j.at("wasKicked").get<bool>(); 
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.chatRoomId = j.at("chatRoomId").get<std::string>(); 
    v.localMember = j.at("localMember").get<LolLobbyTeamBuilderLobbyMember>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.invitations = j.at("invitations").get<std::vector<LolLobbyTeamBuilderLobbyInvitation>>(); 
    v.removalReason = j.at("removalReason").get<LolLobbyTeamBuilderLobbyRemovedFromGameReason>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
    v.members = j.at("members").get<std::vector<LolLobbyTeamBuilderLobbyMember>>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
  }
}