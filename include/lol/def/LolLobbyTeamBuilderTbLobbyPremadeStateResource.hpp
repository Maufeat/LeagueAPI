#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource.hpp"
#include "LolLobbyTeamBuilderTbLobbySlotResource.hpp"
#include "LolLobbyTeamBuilderReadyStateV1.hpp"
namespace lol {
  struct LolLobbyTeamBuilderTbLobbyPremadeStateResource { 
    bool autoFillEligible;
    int64_t timer;
    int32_t localPlayerSlotId;
    std::string draftPremadeId;
    std::vector<std::string> playableDraftPositions;
    bool autoFillProtectedForStreaking;
    int32_t captainSlotId;
    bool readyToMatchmake;
    bool autoFillProtectedForPromos;
    bool showPositionExcluder;
    std::string premadeChatRoomId;
    bool showPositionSelector;
    std::vector<LolLobbyTeamBuilderTbLobbySlotResource> draftSlots;
    LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource backwardsToPremadeTransitionReason;
    LolLobbyTeamBuilderReadyStateV1 readyState; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTbLobbyPremadeStateResource& v) {
    j["autoFillEligible"] = v.autoFillEligible; 
    j["timer"] = v.timer; 
    j["localPlayerSlotId"] = v.localPlayerSlotId; 
    j["draftPremadeId"] = v.draftPremadeId; 
    j["playableDraftPositions"] = v.playableDraftPositions; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["captainSlotId"] = v.captainSlotId; 
    j["readyToMatchmake"] = v.readyToMatchmake; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["premadeChatRoomId"] = v.premadeChatRoomId; 
    j["showPositionSelector"] = v.showPositionSelector; 
    j["draftSlots"] = v.draftSlots; 
    j["backwardsToPremadeTransitionReason"] = v.backwardsToPremadeTransitionReason; 
    j["readyState"] = v.readyState; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTbLobbyPremadeStateResource& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.timer = j.at("timer").get<int64_t>(); 
    v.localPlayerSlotId = j.at("localPlayerSlotId").get<int32_t>(); 
    v.draftPremadeId = j.at("draftPremadeId").get<std::string>(); 
    v.playableDraftPositions = j.at("playableDraftPositions").get<std::vector<std::string>>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.captainSlotId = j.at("captainSlotId").get<int32_t>(); 
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.premadeChatRoomId = j.at("premadeChatRoomId").get<std::string>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.draftSlots = j.at("draftSlots").get<std::vector<LolLobbyTeamBuilderTbLobbySlotResource>>(); 
    v.backwardsToPremadeTransitionReason = j.at("backwardsToPremadeTransitionReason").get<LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource>(); 
    v.readyState = j.at("readyState").get<LolLobbyTeamBuilderReadyStateV1>(); 
  }
}