#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderChampSelectPlayerSelection.hpp"
#include "LolLobbyTeamBuilderChampSelectTradeContract.hpp"
#include "LolLobbyTeamBuilderChampSelectTimer.hpp"
#include "LolLobbyTeamBuilderChampSelectChatRoomDetails.hpp"
namespace lol {
  struct LolLobbyTeamBuilderChampSelectSession { 
    LolLobbyTeamBuilderChampSelectChatRoomDetails chatDetails;
    bool allowRerolling;
    std::vector<json> actions;
    bool allowSkinSelection;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection> theirTeam;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection> myTeam;
    LolLobbyTeamBuilderChampSelectTimer timer;
    bool allowBattleBoost;
    int64_t localPlayerCellId;
    uint32_t rerollsRemaining;
    std::vector<LolLobbyTeamBuilderChampSelectTradeContract> trades; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderChampSelectSession& v) {
    j["chatDetails"] = v.chatDetails; 
    j["allowRerolling"] = v.allowRerolling; 
    j["actions"] = v.actions; 
    j["allowSkinSelection"] = v.allowSkinSelection; 
    j["theirTeam"] = v.theirTeam; 
    j["myTeam"] = v.myTeam; 
    j["timer"] = v.timer; 
    j["allowBattleBoost"] = v.allowBattleBoost; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["rerollsRemaining"] = v.rerollsRemaining; 
    j["trades"] = v.trades; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderChampSelectSession& v) {
    v.chatDetails = j.at("chatDetails").get<LolLobbyTeamBuilderChampSelectChatRoomDetails>(); 
    v.allowRerolling = j.at("allowRerolling").get<bool>(); 
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection>>(); 
    v.myTeam = j.at("myTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection>>(); 
    v.timer = j.at("timer").get<LolLobbyTeamBuilderChampSelectTimer>(); 
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderChampSelectTradeContract>>(); 
  }
}