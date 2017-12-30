#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderTradeV1.hpp"
#include "LolLobbyTeamBuilderRerollStateV1.hpp"
#include "LolLobbyTeamBuilderTeamBuilderBoostInfo.hpp"
#include "LolLobbyTeamBuilderCellsV1.hpp"
namespace lol {
  struct LolLobbyTeamBuilderChampionSelectStateV1 { 
    int64_t currentTotalTimeMillis;
    int64_t currentTimeRemainingMillis;
    LolLobbyTeamBuilderRerollStateV1 rerollState;
    std::string subphase;
    std::map<std::string, json> ceremoniesByActionSetIndex;
    std::vector<LolLobbyTeamBuilderTradeV1> trades;
    LolLobbyTeamBuilderTeamBuilderBoostInfo battleBoostState;
    int32_t currentActionSetIndex;
    std::string teamId;
    int32_t localPlayerCellId;
    bool allowSkinSelection;
    std::string pickIntentClearedReason;
    LolLobbyTeamBuilderCellsV1 cells;
    std::string teamChatRoomId;
    std::vector<json> actionSetList;
    bool allowOptingOutOfBanning; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderChampionSelectStateV1& v) {
    j["currentTotalTimeMillis"] = v.currentTotalTimeMillis; 
    j["currentTimeRemainingMillis"] = v.currentTimeRemainingMillis; 
    j["rerollState"] = v.rerollState; 
    j["subphase"] = v.subphase; 
    j["ceremoniesByActionSetIndex"] = v.ceremoniesByActionSetIndex; 
    j["trades"] = v.trades; 
    j["battleBoostState"] = v.battleBoostState; 
    j["currentActionSetIndex"] = v.currentActionSetIndex; 
    j["teamId"] = v.teamId; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["allowSkinSelection"] = v.allowSkinSelection; 
    j["pickIntentClearedReason"] = v.pickIntentClearedReason; 
    j["cells"] = v.cells; 
    j["teamChatRoomId"] = v.teamChatRoomId; 
    j["actionSetList"] = v.actionSetList; 
    j["allowOptingOutOfBanning"] = v.allowOptingOutOfBanning; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderChampionSelectStateV1& v) {
    v.currentTotalTimeMillis = j.at("currentTotalTimeMillis").get<int64_t>(); 
    v.currentTimeRemainingMillis = j.at("currentTimeRemainingMillis").get<int64_t>(); 
    v.rerollState = j.at("rerollState").get<LolLobbyTeamBuilderRerollStateV1>(); 
    v.subphase = j.at("subphase").get<std::string>(); 
    v.ceremoniesByActionSetIndex = j.at("ceremoniesByActionSetIndex").get<std::map<std::string, json>>(); 
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderTradeV1>>(); 
    v.battleBoostState = j.at("battleBoostState").get<LolLobbyTeamBuilderTeamBuilderBoostInfo>(); 
    v.currentActionSetIndex = j.at("currentActionSetIndex").get<int32_t>(); 
    v.teamId = j.at("teamId").get<std::string>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int32_t>(); 
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
    v.pickIntentClearedReason = j.at("pickIntentClearedReason").get<std::string>(); 
    v.cells = j.at("cells").get<LolLobbyTeamBuilderCellsV1>(); 
    v.teamChatRoomId = j.at("teamChatRoomId").get<std::string>(); 
    v.actionSetList = j.at("actionSetList").get<std::vector<json>>(); 
    v.allowOptingOutOfBanning = j.at("allowOptingOutOfBanning").get<bool>(); 
  }
}