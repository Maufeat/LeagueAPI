#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyInvitation.hpp>
#include <lol/def/LolLobbyQueueAvailability.hpp>
#include <lol/def/LolLobbyLobbyCustomGameLobby.hpp>
#include <lol/def/LolLobbyLobbyRemovedFromGameReason.hpp>
#include <lol/def/LolLobbyLobbyMember.hpp>
namespace lol {
  struct LolLobbyLobby { 
    bool canStartMatchmaking;
    bool wasKicked;
    std::vector<int32_t> allowablePremadeSizes;
    std::string chatRoomId;
    int32_t mapId;
    LolLobbyLobbyMember localMember;
    std::optional<LolLobbyLobbyCustomGameLobby> customGameLobby;
    std::string gameMode;
    int32_t queueId;
    std::vector<LolLobbyLobbyMember> members;
    bool showPositionExcluder;
    LolLobbyQueueAvailability queueAvailability;
    bool isTeamBuilderManaged;
    std::string chatRoomKey;
    std::string invitationId;
    bool autoFillProtectedForPromos;
    std::vector<LolLobbyLobbyInvitation> invitations;
    LolLobbyLobbyRemovedFromGameReason removalReason;
    bool isCustom;
    bool autoFillEligible;
    uint32_t maximumParticipantListSize;
    bool premadeSizeAllowed;
    bool autoFillProtectedForStreaking;
    bool requiredPositionCoverageMet;
    std::vector<std::string> specifiablePositionPreferences;
    bool showPositionSelector; 
  };
  void to_json(json& j, const LolLobbyLobby& v) {
  j["canStartMatchmaking"] = v.canStartMatchmaking; 
  j["wasKicked"] = v.wasKicked; 
  j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
  j["chatRoomId"] = v.chatRoomId; 
  j["mapId"] = v.mapId; 
  j["localMember"] = v.localMember; 
  j["customGameLobby"] = v.customGameLobby; 
  j["gameMode"] = v.gameMode; 
  j["queueId"] = v.queueId; 
  j["members"] = v.members; 
  j["showPositionExcluder"] = v.showPositionExcluder; 
  j["queueAvailability"] = v.queueAvailability; 
  j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
  j["chatRoomKey"] = v.chatRoomKey; 
  j["invitationId"] = v.invitationId; 
  j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
  j["invitations"] = v.invitations; 
  j["removalReason"] = v.removalReason; 
  j["isCustom"] = v.isCustom; 
  j["autoFillEligible"] = v.autoFillEligible; 
  j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
  j["premadeSizeAllowed"] = v.premadeSizeAllowed; 
  j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
  j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet; 
  j["specifiablePositionPreferences"] = v.specifiablePositionPreferences; 
  j["showPositionSelector"] = v.showPositionSelector; 
  }
  void from_json(const json& j, LolLobbyLobby& v) {
  v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>(); 
  v.wasKicked = j.at("wasKicked").get<bool>(); 
  v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
  v.chatRoomId = j.at("chatRoomId").get<std::string>(); 
  v.mapId = j.at("mapId").get<int32_t>(); 
  v.localMember = j.at("localMember").get<LolLobbyLobbyMember>(); 
  v.customGameLobby = j.at("customGameLobby").get<std::optional<LolLobbyLobbyCustomGameLobby>>(); 
  v.gameMode = j.at("gameMode").get<std::string>(); 
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.members = j.at("members").get<std::vector<LolLobbyLobbyMember>>(); 
  v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
  v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability>(); 
  v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
  v.chatRoomKey = j.at("chatRoomKey").get<std::string>(); 
  v.invitationId = j.at("invitationId").get<std::string>(); 
  v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
  v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitation>>(); 
  v.removalReason = j.at("removalReason").get<LolLobbyLobbyRemovedFromGameReason>(); 
  v.isCustom = j.at("isCustom").get<bool>(); 
  v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
  v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>(); 
  v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
  v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
  v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>(); 
  v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>(); 
  v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
  }
}