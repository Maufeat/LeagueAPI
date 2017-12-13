#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderCellsV1.hpp>
#include <lol/def/LolLobbyTeamBuilderRerollStateV1.hpp>
#include <lol/def/LolLobbyTeamBuilderTradeV1.hpp>
#include <lol/def/LolLobbyTeamBuilderTeamBuilderBoostInfo.hpp>
namespace lol {
  struct LolLobbyTeamBuilderChampionSelectStateV1 { 
    int64_t currentTotalTimeMillis;
    int32_t currentActionSetIndex;
    LolLobbyTeamBuilderRerollStateV1 rerollState;
    std::string subphase;
    std::map<std::string, json> ceremoniesByActionSetIndex;
    int64_t currentTimeRemainingMillis;
    std::vector<LolLobbyTeamBuilderTradeV1> trades;
    bool allowSkinSelection;
    LolLobbyTeamBuilderCellsV1 cells;
    std::string teamChatRoomId;
    int32_t localPlayerCellId;
    bool allowOptingOutOfBanning;
    std::string pickIntentClearedReason;
    std::vector<json> actionSetList;
    LolLobbyTeamBuilderTeamBuilderBoostInfo battleBoostState;
    std::string teamId; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderChampionSelectStateV1& v) {
  j["currentTotalTimeMillis"] = v.currentTotalTimeMillis; 
  j["currentActionSetIndex"] = v.currentActionSetIndex; 
  j["rerollState"] = v.rerollState; 
  j["subphase"] = v.subphase; 
  j["ceremoniesByActionSetIndex"] = v.ceremoniesByActionSetIndex; 
  j["currentTimeRemainingMillis"] = v.currentTimeRemainingMillis; 
  j["trades"] = v.trades; 
  j["allowSkinSelection"] = v.allowSkinSelection; 
  j["cells"] = v.cells; 
  j["teamChatRoomId"] = v.teamChatRoomId; 
  j["localPlayerCellId"] = v.localPlayerCellId; 
  j["allowOptingOutOfBanning"] = v.allowOptingOutOfBanning; 
  j["pickIntentClearedReason"] = v.pickIntentClearedReason; 
  j["actionSetList"] = v.actionSetList; 
  j["battleBoostState"] = v.battleBoostState; 
  j["teamId"] = v.teamId; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderChampionSelectStateV1& v) {
  v.currentTotalTimeMillis = j.at("currentTotalTimeMillis").get<int64_t>(); 
  v.currentActionSetIndex = j.at("currentActionSetIndex").get<int32_t>(); 
  v.rerollState = j.at("rerollState").get<LolLobbyTeamBuilderRerollStateV1>(); 
  v.subphase = j.at("subphase").get<std::string>(); 
  v.ceremoniesByActionSetIndex = j.at("ceremoniesByActionSetIndex").get<std::map<std::string, json>>(); 
  v.currentTimeRemainingMillis = j.at("currentTimeRemainingMillis").get<int64_t>(); 
  v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderTradeV1>>(); 
  v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
  v.cells = j.at("cells").get<LolLobbyTeamBuilderCellsV1>(); 
  v.teamChatRoomId = j.at("teamChatRoomId").get<std::string>(); 
  v.localPlayerCellId = j.at("localPlayerCellId").get<int32_t>(); 
  v.allowOptingOutOfBanning = j.at("allowOptingOutOfBanning").get<bool>(); 
  v.pickIntentClearedReason = j.at("pickIntentClearedReason").get<std::string>(); 
  v.actionSetList = j.at("actionSetList").get<std::vector<json>>(); 
  v.battleBoostState = j.at("battleBoostState").get<LolLobbyTeamBuilderTeamBuilderBoostInfo>(); 
  v.teamId = j.at("teamId").get<std::string>(); 
  }
}