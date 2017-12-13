#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderTbLobbySlotResource.hpp>
#include <lol/def/LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource.hpp>
#include <lol/def/LolLobbyTeamBuilderReadyStateV1.hpp>
namespace lol {
  struct LolLobbyTeamBuilderTbLobbyPremadeStateResource { 
    LolLobbyTeamBuilderReadyStateV1 readyState;
    bool autoFillProtectedForPromos;
    int64_t timer;
    std::string premadeChatRoomId;
    std::vector<std::string> playableDraftPositions;
    int32_t localPlayerSlotId;
    bool readyToMatchmake;
    LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource backwardsToPremadeTransitionReason;
    bool autoFillEligible;
    bool showPositionExcluder;
    std::vector<LolLobbyTeamBuilderTbLobbySlotResource> draftSlots;
    bool autoFillProtectedForStreaking;
    int32_t captainSlotId;
    std::string draftPremadeId;
    bool showPositionSelector; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderTbLobbyPremadeStateResource& v) {
  j["readyState"] = v.readyState; 
  j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
  j["timer"] = v.timer; 
  j["premadeChatRoomId"] = v.premadeChatRoomId; 
  j["playableDraftPositions"] = v.playableDraftPositions; 
  j["localPlayerSlotId"] = v.localPlayerSlotId; 
  j["readyToMatchmake"] = v.readyToMatchmake; 
  j["backwardsToPremadeTransitionReason"] = v.backwardsToPremadeTransitionReason; 
  j["autoFillEligible"] = v.autoFillEligible; 
  j["showPositionExcluder"] = v.showPositionExcluder; 
  j["draftSlots"] = v.draftSlots; 
  j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
  j["captainSlotId"] = v.captainSlotId; 
  j["draftPremadeId"] = v.draftPremadeId; 
  j["showPositionSelector"] = v.showPositionSelector; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderTbLobbyPremadeStateResource& v) {
  v.readyState = j.at("readyState").get<LolLobbyTeamBuilderReadyStateV1>(); 
  v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
  v.timer = j.at("timer").get<int64_t>(); 
  v.premadeChatRoomId = j.at("premadeChatRoomId").get<std::string>(); 
  v.playableDraftPositions = j.at("playableDraftPositions").get<std::vector<std::string>>(); 
  v.localPlayerSlotId = j.at("localPlayerSlotId").get<int32_t>(); 
  v.readyToMatchmake = j.at("readyToMatchmake").get<bool>(); 
  v.backwardsToPremadeTransitionReason = j.at("backwardsToPremadeTransitionReason").get<LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource>(); 
  v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
  v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
  v.draftSlots = j.at("draftSlots").get<std::vector<LolLobbyTeamBuilderTbLobbySlotResource>>(); 
  v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
  v.captainSlotId = j.at("captainSlotId").get<int32_t>(); 
  v.draftPremadeId = j.at("draftPremadeId").get<std::string>(); 
  v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
  }
}