#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderLobbyRemovedFromGameReason.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderLobbyInvitation.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderLobbyMember.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderLobby { /**/ 
    std::string chatRoomId;/**/
    bool showPositionSelector;/**/
    bool autoFillProtectedForPromos;/**/
    bool premadeSizeAllowed;/**/
    bool isTeamBuilderManaged;/**/
    bool wasKicked;/**/
    std::vector<std::string> specifiablePositionPreferences;/**/
    bool canStartMatchmaking;/**/
    bool autoFillProtectedForStreaking;/**/
    int32_t queueId;/**/
    bool autoFillEligible;/**/
    std::string invitationId;/**/
    LolLobbyTeamBuilderLobbyRemovedFromGameReason removalReason;/**/
    LolLobbyTeamBuilderLobbyMember localMember;/**/
    std::vector<LolLobbyTeamBuilderLobbyInvitation> invitations;/**/
    std::string chatRoomKey;/**/
    std::vector<LolLobbyTeamBuilderLobbyMember> members;/**/
    bool requiredPositionCoverageMet;/**/
    bool showPositionExcluder;/**/
    std::vector<int32_t> allowablePremadeSizes;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderLobby& v) { 
    j["chatRoomId"] = v.chatRoomId;
    j["showPositionSelector"] = v.showPositionSelector;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["wasKicked"] = v.wasKicked;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["queueId"] = v.queueId;
    j["autoFillEligible"] = v.autoFillEligible;
    j["invitationId"] = v.invitationId;
    j["removalReason"] = v.removalReason;
    j["localMember"] = v.localMember;
    j["invitations"] = v.invitations;
    j["chatRoomKey"] = v.chatRoomKey;
    j["members"] = v.members;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderLobby& v) { 
    v.chatRoomId = j.at("chatRoomId").get<std::string>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.wasKicked = j.at("wasKicked").get<bool>(); 
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>(); 
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.removalReason = j.at("removalReason").get<LolLobbyTeamBuilderLobbyRemovedFromGameReason>(); 
    v.localMember = j.at("localMember").get<LolLobbyTeamBuilderLobbyMember>(); 
    v.invitations = j.at("invitations").get<std::vector<LolLobbyTeamBuilderLobbyInvitation>>(); 
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>(); 
    v.members = j.at("members").get<std::vector<LolLobbyTeamBuilderLobbyMember>>(); 
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
  }
} 