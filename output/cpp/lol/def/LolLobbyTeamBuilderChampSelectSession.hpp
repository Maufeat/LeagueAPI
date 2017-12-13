#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderChampSelectTradeContract.hpp>
#include <lol/def/LolLobbyTeamBuilderChampSelectTimer.hpp>
#include <lol/def/LolLobbyTeamBuilderChampSelectPlayerSelection.hpp>
#include <lol/def/LolLobbyTeamBuilderChampSelectChatRoomDetails.hpp>
namespace lol {
  struct LolLobbyTeamBuilderChampSelectSession { 
    std::vector<LolLobbyTeamBuilderChampSelectTradeContract> trades;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection> theirTeam;
    bool allowSkinSelection;
    std::vector<json> actions;
    int64_t localPlayerCellId;
    LolLobbyTeamBuilderChampSelectTimer timer;
    bool allowBattleBoost;
    LolLobbyTeamBuilderChampSelectChatRoomDetails chatDetails;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection> myTeam;
    uint32_t rerollsRemaining;
    bool allowRerolling; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderChampSelectSession& v) {
  j["trades"] = v.trades; 
  j["theirTeam"] = v.theirTeam; 
  j["allowSkinSelection"] = v.allowSkinSelection; 
  j["actions"] = v.actions; 
  j["localPlayerCellId"] = v.localPlayerCellId; 
  j["timer"] = v.timer; 
  j["allowBattleBoost"] = v.allowBattleBoost; 
  j["chatDetails"] = v.chatDetails; 
  j["myTeam"] = v.myTeam; 
  j["rerollsRemaining"] = v.rerollsRemaining; 
  j["allowRerolling"] = v.allowRerolling; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderChampSelectSession& v) {
  v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderChampSelectTradeContract>>(); 
  v.theirTeam = j.at("theirTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection>>(); 
  v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
  v.actions = j.at("actions").get<std::vector<json>>(); 
  v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
  v.timer = j.at("timer").get<LolLobbyTeamBuilderChampSelectTimer>(); 
  v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
  v.chatDetails = j.at("chatDetails").get<LolLobbyTeamBuilderChampSelectChatRoomDetails>(); 
  v.myTeam = j.at("myTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection>>(); 
  v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
  v.allowRerolling = j.at("allowRerolling").get<bool>(); 
  }
}