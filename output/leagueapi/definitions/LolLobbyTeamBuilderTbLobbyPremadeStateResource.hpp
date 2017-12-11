#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyTeamBuilderTbLobbySlotResource.hpp>"
#include "<leagueapi/definitions/LolLobbyTeamBuilderReadyStateV1.hpp>"
#include "<leagueapi/definitions/LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource.hpp>"

namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyPremadeStateResource { /**/ 
    std::string premadeChatRoomId;/**/
    bool showPositionSelector;/**/
    bool autoFillProtectedForPromos;/**/
    std::string draftPremadeId;/**/
    int64_t timer;/**/
    LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource backwardsToPremadeTransitionReason;/**/
    bool autoFillProtectedForStreaking;/**/
    LolLobbyTeamBuilderReadyStateV1 readyState;/**/
    std::vector<LolLobbyTeamBuilderTbLobbySlotResource> draftSlots;/**/
    bool autoFillEligible;/**/
    bool showPositionExcluder;/**/
    int32_t captainSlotId;/**/
    std::vector<std::string> playableDraftPositions;/**/
    int32_t localPlayerSlotId;/**/
    bool readyToMatchmake;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderTbLobbyPremadeStateResource& v) { 
    j["premadeChatRoomId"] = v.premadeChatRoomId;
    j["showPositionSelector"] = v.showPositionSelector;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["draftPremadeId"] = v.draftPremadeId;
    j["timer"] = v.timer;
    j["backwardsToPremadeTransitionReason"] = v.backwardsToPremadeTransitionReason;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["readyState"] = v.readyState;
    j["draftSlots"] = v.draftSlots;
    j["autoFillEligible"] = v.autoFillEligible;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["captainSlotId"] = v.captainSlotId;
    j["playableDraftPositions"] = v.playableDraftPositions;
    j["localPlayerSlotId"] = v.localPlayerSlotId;
    j["readyToMatchmake"] = v.readyToMatchmake;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderTbLobbyPremadeStateResource& v) { 
    v.premadeChatRoomId = j.at("premadeChatRoomId").get<std::string>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.draftPremadeId = j.at("draftPremadeId").get<std::string>(); 
    v.timer = j.at("timer").get<int64_t>(); 
    v.backwardsToPremadeTransitionReason = j.at("backwardsToPremadeTransitionReason").get<LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.readyState = j.at("readyState").get<LolLobbyTeamBuilderReadyStateV1>(); 
    v.draftSlots = j.at("draftSlots").get<std::vector<LolLobbyTeamBuilderTbLobbySlotResource>>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.captainSlotId = j.at("captainSlotId").get<int32_t>(); 
    v.playableDraftPositions = j.at("playableDraftPositions").get<std::vector<std::string>>(); 
    v.localPlayerSlotId = j.at("localPlayerSlotId").get<int32_t>(); 
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>(); 
  }
} 