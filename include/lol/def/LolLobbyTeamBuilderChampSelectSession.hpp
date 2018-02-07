#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderChampSelectTradeContract.hpp"
#include "LolLobbyTeamBuilderChampSelectTimer.hpp"
#include "LolLobbyTeamBuilderChampSelectChatRoomDetails.hpp"
#include "LolLobbyTeamBuilderChampSelectPlayerSelection.hpp"
namespace lol {
  struct LolLobbyTeamBuilderChampSelectSession { 
    LolLobbyTeamBuilderChampSelectTimer timer;
    LolLobbyTeamBuilderChampSelectChatRoomDetails chatDetails;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection> myTeam;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection> theirTeam;
    std::vector<LolLobbyTeamBuilderChampSelectTradeContract> trades;
    std::vector<json> actions;
    int64_t localPlayerCellId;
    bool allowSkinSelection;
    bool allowBattleBoost;
    bool allowRerolling;
    uint32_t rerollsRemaining; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderChampSelectSession& v) {
    j["timer"] = v.timer; 
    j["chatDetails"] = v.chatDetails; 
    j["myTeam"] = v.myTeam; 
    j["theirTeam"] = v.theirTeam; 
    j["trades"] = v.trades; 
    j["actions"] = v.actions; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["allowSkinSelection"] = v.allowSkinSelection; 
    j["allowBattleBoost"] = v.allowBattleBoost; 
    j["allowRerolling"] = v.allowRerolling; 
    j["rerollsRemaining"] = v.rerollsRemaining; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderChampSelectSession& v) {
    v.timer = j.at("timer").get<LolLobbyTeamBuilderChampSelectTimer>(); 
    v.chatDetails = j.at("chatDetails").get<LolLobbyTeamBuilderChampSelectChatRoomDetails>(); 
    v.myTeam = j.at("myTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection>>(); 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection>>(); 
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderChampSelectTradeContract>>(); 
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.allowRerolling = j.at("allowRerolling").get<bool>(); 
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
  }
}