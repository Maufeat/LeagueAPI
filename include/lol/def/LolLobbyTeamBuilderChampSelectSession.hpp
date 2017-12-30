#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderChampSelectChatRoomDetails.hpp"
#include "LolLobbyTeamBuilderChampSelectTradeContract.hpp"
#include "LolLobbyTeamBuilderChampSelectTimer.hpp"
#include "LolLobbyTeamBuilderChampSelectPlayerSelection.hpp"
namespace lol {
  struct LolLobbyTeamBuilderChampSelectSession { 
    LolLobbyTeamBuilderChampSelectTimer timer;
    int64_t localPlayerCellId;
    std::vector<json> actions;
    bool allowBattleBoost;
    bool allowSkinSelection;
    uint32_t rerollsRemaining;
    LolLobbyTeamBuilderChampSelectChatRoomDetails chatDetails;
    std::vector<LolLobbyTeamBuilderChampSelectTradeContract> trades;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection> theirTeam;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection> myTeam;
    bool allowRerolling; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderChampSelectSession& v) {
    j["timer"] = v.timer; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["actions"] = v.actions; 
    j["allowBattleBoost"] = v.allowBattleBoost; 
    j["allowSkinSelection"] = v.allowSkinSelection; 
    j["rerollsRemaining"] = v.rerollsRemaining; 
    j["chatDetails"] = v.chatDetails; 
    j["trades"] = v.trades; 
    j["theirTeam"] = v.theirTeam; 
    j["myTeam"] = v.myTeam; 
    j["allowRerolling"] = v.allowRerolling; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderChampSelectSession& v) {
    v.timer = j.at("timer").get<LolLobbyTeamBuilderChampSelectTimer>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
    v.chatDetails = j.at("chatDetails").get<LolLobbyTeamBuilderChampSelectChatRoomDetails>(); 
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderChampSelectTradeContract>>(); 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection>>(); 
    v.myTeam = j.at("myTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection>>(); 
    v.allowRerolling = j.at("allowRerolling").get<bool>(); 
  }
}