#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderTbLobbySlotResource.hpp"
#include "LolLobbyTeamBuilderReadyStateV1.hpp"
#include "LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource.hpp"
namespace lol {
  struct LolLobbyTeamBuilderTbLobbyPremadeStateResource { 
    int64_t timer;
    std::string draftPremadeId;
    std::string premadeChatRoomId;
    int32_t captainSlotId;
    bool showPositionSelector;
    bool showPositionExcluder;
    bool readyToMatchmake;
    std::vector<LolLobbyTeamBuilderTbLobbySlotResource> draftSlots;
    std::vector<std::string> playableDraftPositions;
    int32_t localPlayerSlotId;
    LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource backwardsToPremadeTransitionReason;
    bool autoFillEligible;
    bool autoFillProtectedForStreaking;
    bool autoFillProtectedForPromos;
    LolLobbyTeamBuilderReadyStateV1 readyState; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTbLobbyPremadeStateResource& v) {
    j["timer"] = v.timer; 
    j["draftPremadeId"] = v.draftPremadeId; 
    j["premadeChatRoomId"] = v.premadeChatRoomId; 
    j["captainSlotId"] = v.captainSlotId; 
    j["showPositionSelector"] = v.showPositionSelector; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["readyToMatchmake"] = v.readyToMatchmake; 
    j["draftSlots"] = v.draftSlots; 
    j["playableDraftPositions"] = v.playableDraftPositions; 
    j["localPlayerSlotId"] = v.localPlayerSlotId; 
    j["backwardsToPremadeTransitionReason"] = v.backwardsToPremadeTransitionReason; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["readyState"] = v.readyState; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTbLobbyPremadeStateResource& v) {
    v.timer = j.at("timer").get<int64_t>(); 
    v.draftPremadeId = j.at("draftPremadeId").get<std::string>(); 
    v.premadeChatRoomId = j.at("premadeChatRoomId").get<std::string>(); 
    v.captainSlotId = j.at("captainSlotId").get<int32_t>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>(); 
    v.draftSlots = j.at("draftSlots").get<std::vector<LolLobbyTeamBuilderTbLobbySlotResource>>(); 
    v.playableDraftPositions = j.at("playableDraftPositions").get<std::vector<std::string>>(); 
    v.localPlayerSlotId = j.at("localPlayerSlotId").get<int32_t>(); 
    v.backwardsToPremadeTransitionReason = j.at("backwardsToPremadeTransitionReason").get<LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.readyState = j.at("readyState").get<LolLobbyTeamBuilderReadyStateV1>(); 
  }
}