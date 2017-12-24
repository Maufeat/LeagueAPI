#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyRemovedFromGameReason.hpp"
#include "LolLobbyLobbyCustomGameLobby.hpp"
#include "LolLobbyLobbyInvitation.hpp"
#include "LolLobbyLobbyMember.hpp"
#include "LolLobbyQueueAvailability.hpp"
namespace lol {
  struct LolLobbyLobby { 
    LolLobbyQueueAvailability queueAvailability;
    std::string chatRoomId;
    std::vector<LolLobbyLobbyInvitation> invitations;
    uint32_t maximumParticipantListSize;
    int32_t mapId;
    bool isTeamBuilderManaged;
    std::string gameMode;
    bool premadeSizeAllowed;
    bool autoFillProtectedForStreaking;
    bool showPositionSelector;
    bool wasKicked;
    LolLobbyLobbyMember localMember;
    bool canStartMatchmaking;
    std::string chatRoomKey;
    std::string invitationId;
    bool autoFillProtectedForPromos;
    std::optional<LolLobbyLobbyCustomGameLobby> customGameLobby;
    std::vector<LolLobbyLobbyMember> members;
    std::vector<std::string> specifiablePositionPreferences;
    std::vector<int32_t> allowablePremadeSizes;
    bool isCustom;
    int32_t queueId;
    bool autoFillEligible;
    bool requiredPositionCoverageMet;
    LolLobbyLobbyRemovedFromGameReason removalReason;
    bool showPositionExcluder; 
  };
  inline void to_json(json& j, const LolLobbyLobby& v) {
    j["queueAvailability"] = v.queueAvailability; 
    j["chatRoomId"] = v.chatRoomId; 
    j["invitations"] = v.invitations; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["mapId"] = v.mapId; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
    j["gameMode"] = v.gameMode; 
    j["premadeSizeAllowed"] = v.premadeSizeAllowed; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["showPositionSelector"] = v.showPositionSelector; 
    j["wasKicked"] = v.wasKicked; 
    j["localMember"] = v.localMember; 
    j["canStartMatchmaking"] = v.canStartMatchmaking; 
    j["chatRoomKey"] = v.chatRoomKey; 
    j["invitationId"] = v.invitationId; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    if(v.customGameLobby)
      j["customGameLobby"] = *v.customGameLobby;
    j["members"] = v.members; 
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences; 
    j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
    j["isCustom"] = v.isCustom; 
    j["queueId"] = v.queueId; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet; 
    j["removalReason"] = v.removalReason; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
  }
  inline void from_json(const json& j, LolLobbyLobby& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability>(); 
    v.chatRoomId = j.at("chatRoomId").get<std::string>(); 
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitation>>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.wasKicked = j.at("wasKicked").get<bool>(); 
    v.localMember = j.at("localMember").get<LolLobbyLobbyMember>(); 
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>(); 
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    if(auto it = j.find("customGameLobby"); it != j.end() && !it->is_null())
      v.customGameLobby = it->get<std::optional<LolLobbyLobbyCustomGameLobby>>(); 
    v.members = j.at("members").get<std::vector<LolLobbyLobbyMember>>(); 
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>(); 
    v.removalReason = j.at("removalReason").get<LolLobbyLobbyRemovedFromGameReason>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
  }
}