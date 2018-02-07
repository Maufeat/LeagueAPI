#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyInvitation.hpp"
#include "LolLobbyLobbyRemovedFromGameReason.hpp"
#include "LolLobbyLobbyCustomGameLobby.hpp"
#include "LolLobbyQueueAvailability.hpp"
#include "LolLobbyLobbyMember.hpp"
namespace lol {
  struct LolLobbyLobby { 
    int32_t queueId;
    int32_t mapId;
    std::string gameMode;
    std::string invitationId;
    std::string chatRoomId;
    std::string chatRoomKey;
    std::vector<LolLobbyLobbyMember> members;
    LolLobbyLobbyMember localMember;
    std::vector<LolLobbyLobbyInvitation> invitations;
    bool wasKicked;
    LolLobbyLobbyRemovedFromGameReason removalReason;
    bool canStartMatchmaking;
    bool showPositionSelector;
    bool showPositionExcluder;
    std::vector<std::string> specifiablePositionPreferences;
    bool autoFillEligible;
    std::optional<LolLobbyLobbyCustomGameLobby> customGameLobby;
    bool isCustom;
    bool autoFillProtectedForStreaking;
    bool autoFillProtectedForPromos;
    bool isTeamBuilderManaged;
    uint32_t maximumParticipantListSize;
    bool premadeSizeAllowed;
    bool requiredPositionCoverageMet;
    std::vector<int32_t> allowablePremadeSizes;
    LolLobbyQueueAvailability queueAvailability; 
  };
  inline void to_json(json& j, const LolLobbyLobby& v) {
    j["queueId"] = v.queueId; 
    j["mapId"] = v.mapId; 
    j["gameMode"] = v.gameMode; 
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
    if(v.customGameLobby)
      j["customGameLobby"] = *v.customGameLobby;
    j["isCustom"] = v.isCustom; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["premadeSizeAllowed"] = v.premadeSizeAllowed; 
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet; 
    j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
    j["queueAvailability"] = v.queueAvailability; 
  }
  inline void from_json(const json& j, LolLobbyLobby& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.chatRoomId = j.at("chatRoomId").get<std::string>(); 
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>(); 
    v.members = j.at("members").get<std::vector<LolLobbyLobbyMember>>(); 
    v.localMember = j.at("localMember").get<LolLobbyLobbyMember>(); 
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitation>>(); 
    v.wasKicked = j.at("wasKicked").get<bool>(); 
    v.removalReason = j.at("removalReason").get<LolLobbyLobbyRemovedFromGameReason>(); 
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    if(auto it = j.find("customGameLobby"); it != j.end() && !it->is_null())
      v.customGameLobby = it->get<std::optional<LolLobbyLobbyCustomGameLobby>>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>(); 
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability>(); 
  }
}