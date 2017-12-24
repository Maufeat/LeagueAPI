#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderTeamBuilderBoostInfo.hpp"
#include "LolLobbyTeamBuilderTradeV1.hpp"
#include "LolLobbyTeamBuilderRerollStateV1.hpp"
#include "LolLobbyTeamBuilderCellsV1.hpp"
namespace lol {
  struct LolLobbyTeamBuilderChampionSelectStateV1 { 
    LolLobbyTeamBuilderCellsV1 cells;
    std::string subphase;
    bool allowSkinSelection;
    std::string teamChatRoomId;
    std::map<std::string, json> ceremoniesByActionSetIndex;
    std::string teamId;
    LolLobbyTeamBuilderTeamBuilderBoostInfo battleBoostState;
    bool allowOptingOutOfBanning;
    int32_t currentActionSetIndex;
    std::vector<json> actionSetList;
    int64_t currentTimeRemainingMillis;
    int32_t localPlayerCellId;
    LolLobbyTeamBuilderRerollStateV1 rerollState;
    int64_t currentTotalTimeMillis;
    std::string pickIntentClearedReason;
    std::vector<LolLobbyTeamBuilderTradeV1> trades; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderChampionSelectStateV1& v) {
    j["cells"] = v.cells; 
    j["subphase"] = v.subphase; 
    j["allowSkinSelection"] = v.allowSkinSelection; 
    j["teamChatRoomId"] = v.teamChatRoomId; 
    j["ceremoniesByActionSetIndex"] = v.ceremoniesByActionSetIndex; 
    j["teamId"] = v.teamId; 
    j["battleBoostState"] = v.battleBoostState; 
    j["allowOptingOutOfBanning"] = v.allowOptingOutOfBanning; 
    j["currentActionSetIndex"] = v.currentActionSetIndex; 
    j["actionSetList"] = v.actionSetList; 
    j["currentTimeRemainingMillis"] = v.currentTimeRemainingMillis; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["rerollState"] = v.rerollState; 
    j["currentTotalTimeMillis"] = v.currentTotalTimeMillis; 
    j["pickIntentClearedReason"] = v.pickIntentClearedReason; 
    j["trades"] = v.trades; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderChampionSelectStateV1& v) {
    v.cells = j.at("cells").get<LolLobbyTeamBuilderCellsV1>(); 
    v.subphase = j.at("subphase").get<std::string>(); 
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
    v.teamChatRoomId = j.at("teamChatRoomId").get<std::string>(); 
    v.ceremoniesByActionSetIndex = j.at("ceremoniesByActionSetIndex").get<std::map<std::string, json>>(); 
    v.teamId = j.at("teamId").get<std::string>(); 
    v.battleBoostState = j.at("battleBoostState").get<LolLobbyTeamBuilderTeamBuilderBoostInfo>(); 
    v.allowOptingOutOfBanning = j.at("allowOptingOutOfBanning").get<bool>(); 
    v.currentActionSetIndex = j.at("currentActionSetIndex").get<int32_t>(); 
    v.actionSetList = j.at("actionSetList").get<std::vector<json>>(); 
    v.currentTimeRemainingMillis = j.at("currentTimeRemainingMillis").get<int64_t>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int32_t>(); 
    v.rerollState = j.at("rerollState").get<LolLobbyTeamBuilderRerollStateV1>(); 
    v.currentTotalTimeMillis = j.at("currentTotalTimeMillis").get<int64_t>(); 
    v.pickIntentClearedReason = j.at("pickIntentClearedReason").get<std::string>(); 
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderTradeV1>>(); 
  }
}