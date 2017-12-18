#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderChampSelectChatRoomDetails.hpp"
#include "LolLobbyTeamBuilderChampSelectPlayerSelection.hpp"
#include "LolLobbyTeamBuilderChampSelectTradeContract.hpp"
#include "LolLobbyTeamBuilderChampSelectTimer.hpp"
namespace lol {
  struct LolLobbyTeamBuilderChampSelectSession { 
    std::vector<json> actions;
    LolLobbyTeamBuilderChampSelectChatRoomDetails chatDetails;
    int64_t localPlayerCellId;
    bool allowBattleBoost;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection> myTeam;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection> theirTeam;
    std::vector<LolLobbyTeamBuilderChampSelectTradeContract> trades;
    bool allowSkinSelection;
    uint32_t rerollsRemaining;
    LolLobbyTeamBuilderChampSelectTimer timer;
    bool allowRerolling; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderChampSelectSession& v) {
    j["actions"] = v.actions; 
    j["chatDetails"] = v.chatDetails; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["allowBattleBoost"] = v.allowBattleBoost; 
    j["myTeam"] = v.myTeam; 
    j["theirTeam"] = v.theirTeam; 
    j["trades"] = v.trades; 
    j["allowSkinSelection"] = v.allowSkinSelection; 
    j["rerollsRemaining"] = v.rerollsRemaining; 
    j["timer"] = v.timer; 
    j["allowRerolling"] = v.allowRerolling; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderChampSelectSession& v) {
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.chatDetails = j.at("chatDetails").get<LolLobbyTeamBuilderChampSelectChatRoomDetails>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.myTeam = j.at("myTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection>>(); 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection>>(); 
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderChampSelectTradeContract>>(); 
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
    v.timer = j.at("timer").get<LolLobbyTeamBuilderChampSelectTimer>(); 
    v.allowRerolling = j.at("allowRerolling").get<bool>(); 
  }
}