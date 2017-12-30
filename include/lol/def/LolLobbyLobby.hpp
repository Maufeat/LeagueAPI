#pragma once
#include "../base_def.hpp" 
#include "LolLobbyQueueAvailability.hpp"
#include "LolLobbyLobbyInvitation.hpp"
#include "LolLobbyLobbyMember.hpp"
#include "LolLobbyLobbyCustomGameLobby.hpp"
#include "LolLobbyLobbyRemovedFromGameReason.hpp"
namespace lol {
  struct LolLobbyLobby { 
    std::vector<LolLobbyLobbyInvitation> invitations;
    bool wasKicked;
    uint32_t maximumParticipantListSize;
    std::string chatRoomKey;
    bool premadeSizeAllowed;
    LolLobbyLobbyMember localMember;
    bool autoFillProtectedForStreaking;
    LolLobbyQueueAvailability queueAvailability;
    std::string chatRoomId;
    std::string invitationId;
    bool isCustom;
    int32_t mapId;
    std::string gameMode;
    std::vector<LolLobbyLobbyMember> members;
    bool autoFillEligible;
    int32_t queueId;
    bool requiredPositionCoverageMet;
    bool canStartMatchmaking;
    bool autoFillProtectedForPromos;
    bool showPositionExcluder;
    std::optional<LolLobbyLobbyCustomGameLobby> customGameLobby;
    std::vector<std::string> specifiablePositionPreferences;
    LolLobbyLobbyRemovedFromGameReason removalReason;
    bool showPositionSelector;
    std::vector<int32_t> allowablePremadeSizes;
    bool isTeamBuilderManaged; 
  };
  inline void to_json(json& j, const LolLobbyLobby& v) {
    j["invitations"] = v.invitations; 
    j["wasKicked"] = v.wasKicked; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["chatRoomKey"] = v.chatRoomKey; 
    j["premadeSizeAllowed"] = v.premadeSizeAllowed; 
    j["localMember"] = v.localMember; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["queueAvailability"] = v.queueAvailability; 
    j["chatRoomId"] = v.chatRoomId; 
    j["invitationId"] = v.invitationId; 
    j["isCustom"] = v.isCustom; 
    j["mapId"] = v.mapId; 
    j["gameMode"] = v.gameMode; 
    j["members"] = v.members; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["queueId"] = v.queueId; 
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet; 
    j["canStartMatchmaking"] = v.canStartMatchmaking; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
    if(v.customGameLobby)
      j["customGameLobby"] = *v.customGameLobby;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences; 
    j["removalReason"] = v.removalReason; 
    j["showPositionSelector"] = v.showPositionSelector; 
    j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
  }
  inline void from_json(const json& j, LolLobbyLobby& v) {
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitation>>(); 
    v.wasKicked = j.at("wasKicked").get<bool>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>(); 
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>(); 
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
    v.localMember = j.at("localMember").get<LolLobbyLobbyMember>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability>(); 
    v.chatRoomId = j.at("chatRoomId").get<std::string>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.members = j.at("members").get<std::vector<LolLobbyLobbyMember>>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>(); 
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    if(auto it = j.find("customGameLobby"); it != j.end() && !it->is_null())
      v.customGameLobby = it->get<std::optional<LolLobbyLobbyCustomGameLobby>>(); 
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>(); 
    v.removalReason = j.at("removalReason").get<LolLobbyLobbyRemovedFromGameReason>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
  }
}