#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderRerollStateV1.hpp"
#include "LolLobbyTeamBuilderCellsV1.hpp"
#include "LolLobbyTeamBuilderTradeV1.hpp"
#include "LolLobbyTeamBuilderTeamBuilderBoostInfo.hpp"
namespace lol {
  struct LolLobbyTeamBuilderChampionSelectStateV1 { 
    std::string teamId;
    std::string teamChatRoomId;
    std::string subphase;
    std::vector<json> actionSetList;
    std::map<std::string, json> ceremoniesByActionSetIndex;
    int32_t currentActionSetIndex;
    LolLobbyTeamBuilderCellsV1 cells;
    int32_t localPlayerCellId;
    int64_t currentTotalTimeMillis;
    int64_t currentTimeRemainingMillis;
    std::vector<LolLobbyTeamBuilderTradeV1> trades;
    std::string pickIntentClearedReason;
    bool allowOptingOutOfBanning;
    bool allowSkinSelection;
    LolLobbyTeamBuilderRerollStateV1 rerollState;
    LolLobbyTeamBuilderTeamBuilderBoostInfo battleBoostState; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderChampionSelectStateV1& v) {
    j["teamId"] = v.teamId; 
    j["teamChatRoomId"] = v.teamChatRoomId; 
    j["subphase"] = v.subphase; 
    j["actionSetList"] = v.actionSetList; 
    j["ceremoniesByActionSetIndex"] = v.ceremoniesByActionSetIndex; 
    j["currentActionSetIndex"] = v.currentActionSetIndex; 
    j["cells"] = v.cells; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["currentTotalTimeMillis"] = v.currentTotalTimeMillis; 
    j["currentTimeRemainingMillis"] = v.currentTimeRemainingMillis; 
    j["trades"] = v.trades; 
    j["pickIntentClearedReason"] = v.pickIntentClearedReason; 
    j["allowOptingOutOfBanning"] = v.allowOptingOutOfBanning; 
    j["allowSkinSelection"] = v.allowSkinSelection; 
    j["rerollState"] = v.rerollState; 
    j["battleBoostState"] = v.battleBoostState; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderChampionSelectStateV1& v) {
    v.teamId = j.at("teamId").get<std::string>(); 
    v.teamChatRoomId = j.at("teamChatRoomId").get<std::string>(); 
    v.subphase = j.at("subphase").get<std::string>(); 
    v.actionSetList = j.at("actionSetList").get<std::vector<json>>(); 
    v.ceremoniesByActionSetIndex = j.at("ceremoniesByActionSetIndex").get<std::map<std::string, json>>(); 
    v.currentActionSetIndex = j.at("currentActionSetIndex").get<int32_t>(); 
    v.cells = j.at("cells").get<LolLobbyTeamBuilderCellsV1>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int32_t>(); 
    v.currentTotalTimeMillis = j.at("currentTotalTimeMillis").get<int64_t>(); 
    v.currentTimeRemainingMillis = j.at("currentTimeRemainingMillis").get<int64_t>(); 
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderTradeV1>>(); 
    v.pickIntentClearedReason = j.at("pickIntentClearedReason").get<std::string>(); 
    v.allowOptingOutOfBanning = j.at("allowOptingOutOfBanning").get<bool>(); 
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
    v.rerollState = j.at("rerollState").get<LolLobbyTeamBuilderRerollStateV1>(); 
    v.battleBoostState = j.at("battleBoostState").get<LolLobbyTeamBuilderTeamBuilderBoostInfo>(); 
  }
}