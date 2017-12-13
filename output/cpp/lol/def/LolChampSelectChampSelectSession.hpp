#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectChampSelectChatRoomDetails.hpp>
#include <lol/def/LolChampSelectChampSelectTimer.hpp>
#include <lol/def/LolChampSelectChampSelectPlayerSelection.hpp>
#include <lol/def/LolChampSelectChampSelectTradeContract.hpp>
#include <lol/def/LolChampSelectChampSelectBannedChampions.hpp>
namespace lol {
  struct LolChampSelectChampSelectSession { 
    std::vector<LolChampSelectChampSelectPlayerSelection> theirTeam;
    bool isSpectating;
    int64_t localPlayerCellId;
    LolChampSelectChampSelectTimer timer;
    bool allowBattleBoost;
    LolChampSelectChampSelectChatRoomDetails chatDetails;
    std::vector<LolChampSelectChampSelectPlayerSelection> myTeam;
    bool allowRerolling;
    std::vector<LolChampSelectChampSelectTradeContract> trades;
    std::vector<json> actions;
    uint32_t rerollsRemaining;
    bool allowSkinSelection;
    LolChampSelectChampSelectBannedChampions bans; 
  };
  void to_json(json& j, const LolChampSelectChampSelectSession& v) {
  j["theirTeam"] = v.theirTeam; 
  j["isSpectating"] = v.isSpectating; 
  j["localPlayerCellId"] = v.localPlayerCellId; 
  j["timer"] = v.timer; 
  j["allowBattleBoost"] = v.allowBattleBoost; 
  j["chatDetails"] = v.chatDetails; 
  j["myTeam"] = v.myTeam; 
  j["allowRerolling"] = v.allowRerolling; 
  j["trades"] = v.trades; 
  j["actions"] = v.actions; 
  j["rerollsRemaining"] = v.rerollsRemaining; 
  j["allowSkinSelection"] = v.allowSkinSelection; 
  j["bans"] = v.bans; 
  }
  void from_json(const json& j, LolChampSelectChampSelectSession& v) {
  v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection>>(); 
  v.isSpectating = j.at("isSpectating").get<bool>(); 
  v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
  v.timer = j.at("timer").get<LolChampSelectChampSelectTimer>(); 
  v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
  v.chatDetails = j.at("chatDetails").get<LolChampSelectChampSelectChatRoomDetails>(); 
  v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection>>(); 
  v.allowRerolling = j.at("allowRerolling").get<bool>(); 
  v.trades = j.at("trades").get<std::vector<LolChampSelectChampSelectTradeContract>>(); 
  v.actions = j.at("actions").get<std::vector<json>>(); 
  v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
  v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
  v.bans = j.at("bans").get<LolChampSelectChampSelectBannedChampions>(); 
  }
}