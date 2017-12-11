#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyLobbyRemovedFromGameReason.hpp>"
#include "<leagueapi/definitions/LolLobbyLobbyInvitation.hpp>"
#include "<leagueapi/definitions/LolLobbyLobbyCustomGameLobby.hpp>"
#include "<leagueapi/definitions/LolLobbyQueueAvailability.hpp>"
#include "<leagueapi/definitions/LolLobbyLobbyMember.hpp>"

namespace leagueapi {
  struct LolLobbyLobby { /**/ 
    uint32_t maximumParticipantListSize;/**/
    bool autoFillProtectedForStreaking;/**/
    bool autoFillProtectedForPromos;/**/
    bool isTeamBuilderManaged;/**/
    std::optional<LolLobbyLobbyCustomGameLobby> customGameLobby;/**/
    bool canStartMatchmaking;/**/
    int32_t queueId;/**/
    bool autoFillEligible;/**/
    std::string invitationId;/**/
    std::string chatRoomKey;/**/
    bool isCustom;/**/
    std::vector<LolLobbyLobbyMember> members;/**/
    int32_t mapId;/**/
    bool showPositionExcluder;/**/
    std::string chatRoomId;/**/
    bool showPositionSelector;/**/
    bool premadeSizeAllowed;/**/
    bool wasKicked;/**/
    LolLobbyQueueAvailability queueAvailability;/**/
    std::vector<std::string> specifiablePositionPreferences;/**/
    LolLobbyLobbyMember localMember;/**/
    std::vector<LolLobbyLobbyInvitation> invitations;/**/
    LolLobbyLobbyRemovedFromGameReason removalReason;/**/
    std::vector<int32_t> allowablePremadeSizes;/**/
    bool requiredPositionCoverageMet;/**/
    std::string gameMode;/**/
  };
  static void to_json(json& j, const LolLobbyLobby& v) { 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["customGameLobby"] = v.customGameLobby;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
    j["queueId"] = v.queueId;
    j["autoFillEligible"] = v.autoFillEligible;
    j["invitationId"] = v.invitationId;
    j["chatRoomKey"] = v.chatRoomKey;
    j["isCustom"] = v.isCustom;
    j["members"] = v.members;
    j["mapId"] = v.mapId;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["chatRoomId"] = v.chatRoomId;
    j["showPositionSelector"] = v.showPositionSelector;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["wasKicked"] = v.wasKicked;
    j["queueAvailability"] = v.queueAvailability;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["localMember"] = v.localMember;
    j["invitations"] = v.invitations;
    j["removalReason"] = v.removalReason;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["gameMode"] = v.gameMode;
  }
  static void from_json(const json& j, LolLobbyLobby& v) { 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.customGameLobby = j.at("customGameLobby").get<std::optional<LolLobbyLobbyCustomGameLobby>>(); 
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.members = j.at("members").get<std::vector<LolLobbyLobbyMember>>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.chatRoomId = j.at("chatRoomId").get<std::string>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
    v.wasKicked = j.at("wasKicked").get<bool>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability>(); 
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>(); 
    v.localMember = j.at("localMember").get<LolLobbyLobbyMember>(); 
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitation>>(); 
    v.removalReason = j.at("removalReason").get<LolLobbyLobbyRemovedFromGameReason>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
  }
} 