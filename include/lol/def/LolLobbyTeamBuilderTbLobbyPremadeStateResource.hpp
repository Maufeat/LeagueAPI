#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderTbLobbySlotResource.hpp"
#include "LolLobbyTeamBuilderReadyStateV1.hpp"
#include "LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource.hpp"
namespace lol {
  struct LolLobbyTeamBuilderTbLobbyPremadeStateResource { 
    LolLobbyTeamBuilderReadyStateV1 readyState;
    bool autoFillProtectedForStreaking;
    bool autoFillProtectedForPromos;
    std::string draftPremadeId;
    bool readyToMatchmake;
    int32_t localPlayerSlotId;
    std::string premadeChatRoomId;
    int64_t timer;
    int32_t captainSlotId;
    bool showPositionSelector;
    bool autoFillEligible;
    std::vector<std::string> playableDraftPositions;
    bool showPositionExcluder;
    std::vector<LolLobbyTeamBuilderTbLobbySlotResource> draftSlots;
    LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource backwardsToPremadeTransitionReason; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTbLobbyPremadeStateResource& v) {
    j["readyState"] = v.readyState; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["draftPremadeId"] = v.draftPremadeId; 
    j["readyToMatchmake"] = v.readyToMatchmake; 
    j["localPlayerSlotId"] = v.localPlayerSlotId; 
    j["premadeChatRoomId"] = v.premadeChatRoomId; 
    j["timer"] = v.timer; 
    j["captainSlotId"] = v.captainSlotId; 
    j["showPositionSelector"] = v.showPositionSelector; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["playableDraftPositions"] = v.playableDraftPositions; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["draftSlots"] = v.draftSlots; 
    j["backwardsToPremadeTransitionReason"] = v.backwardsToPremadeTransitionReason; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTbLobbyPremadeStateResource& v) {
    v.readyState = j.at("readyState").get<LolLobbyTeamBuilderReadyStateV1>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.draftPremadeId = j.at("draftPremadeId").get<std::string>(); 
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>(); 
    v.localPlayerSlotId = j.at("localPlayerSlotId").get<int32_t>(); 
    v.premadeChatRoomId = j.at("premadeChatRoomId").get<std::string>(); 
    v.timer = j.at("timer").get<int64_t>(); 
    v.captainSlotId = j.at("captainSlotId").get<int32_t>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.playableDraftPositions = j.at("playableDraftPositions").get<std::vector<std::string>>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.draftSlots = j.at("draftSlots").get<std::vector<LolLobbyTeamBuilderTbLobbySlotResource>>(); 
    v.backwardsToPremadeTransitionReason = j.at("backwardsToPremadeTransitionReason").get<LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource>(); 
  }
}