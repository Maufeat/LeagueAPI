#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderTeamBuilderBoostInfo.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderRerollStateV1.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderCellsV1.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderTradeV1.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderChampionSelectStateV1 { /**/ 
    std::string teamChatRoomId;/**/
    std::string subphase;/**/
    int32_t localPlayerCellId;/**/
    std::map<std::string, json> ceremoniesByActionSetIndex;/**/
    std::string teamId;/**/
    bool allowSkinSelection;/**/
    int32_t currentActionSetIndex;/**/
    std::string pickIntentClearedReason;/**/
    int64_t currentTotalTimeMillis;/**/
    LolLobbyTeamBuilderRerollStateV1 rerollState;/**/
    std::vector<LolLobbyTeamBuilderTradeV1> trades;/**/
    LolLobbyTeamBuilderCellsV1 cells;/**/
    LolLobbyTeamBuilderTeamBuilderBoostInfo battleBoostState;/**/
    std::vector<json> actionSetList;/**/
    int64_t currentTimeRemainingMillis;/**/
    bool allowOptingOutOfBanning;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderChampionSelectStateV1& v) { 
    j["teamChatRoomId"] = v.teamChatRoomId;
    j["subphase"] = v.subphase;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["ceremoniesByActionSetIndex"] = v.ceremoniesByActionSetIndex;
    j["teamId"] = v.teamId;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["currentActionSetIndex"] = v.currentActionSetIndex;
    j["pickIntentClearedReason"] = v.pickIntentClearedReason;
    j["currentTotalTimeMillis"] = v.currentTotalTimeMillis;
    j["rerollState"] = v.rerollState;
    j["trades"] = v.trades;
    j["cells"] = v.cells;
    j["battleBoostState"] = v.battleBoostState;
    j["actionSetList"] = v.actionSetList;
    j["currentTimeRemainingMillis"] = v.currentTimeRemainingMillis;
    j["allowOptingOutOfBanning"] = v.allowOptingOutOfBanning;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderChampionSelectStateV1& v) { 
    v.teamChatRoomId = j.at("teamChatRoomId").get<std::string>(); 
    v.subphase = j.at("subphase").get<std::string>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int32_t>(); 
    v.ceremoniesByActionSetIndex = j.at("ceremoniesByActionSetIndex").get<std::map<std::string, json>>(); 
    v.teamId = j.at("teamId").get<std::string>(); 
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
    v.currentActionSetIndex = j.at("currentActionSetIndex").get<int32_t>(); 
    v.pickIntentClearedReason = j.at("pickIntentClearedReason").get<std::string>(); 
    v.currentTotalTimeMillis = j.at("currentTotalTimeMillis").get<int64_t>(); 
    v.rerollState = j.at("rerollState").get<LolLobbyTeamBuilderRerollStateV1>(); 
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderTradeV1>>(); 
    v.cells = j.at("cells").get<LolLobbyTeamBuilderCellsV1>(); 
    v.battleBoostState = j.at("battleBoostState").get<LolLobbyTeamBuilderTeamBuilderBoostInfo>(); 
    v.actionSetList = j.at("actionSetList").get<std::vector<json>>(); 
    v.currentTimeRemainingMillis = j.at("currentTimeRemainingMillis").get<int64_t>(); 
    v.allowOptingOutOfBanning = j.at("allowOptingOutOfBanning").get<bool>(); 
  }
} 