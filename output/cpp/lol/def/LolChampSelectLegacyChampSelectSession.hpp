#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectLegacyChampSelectBannedChampions.hpp>
#include <lol/def/LolChampSelectLegacyChampSelectChatRoomDetails.hpp>
#include <lol/def/LolChampSelectLegacyChampSelectTimer.hpp>
#include <lol/def/LolChampSelectLegacyChampSelectPlayerSelection.hpp>
#include <lol/def/LolChampSelectLegacyChampSelectTradeContract.hpp>
namespace lol {
  struct LolChampSelectLegacyChampSelectSession { 
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection> theirTeam;
    bool isSpectating;
    int64_t localPlayerCellId;
    LolChampSelectLegacyChampSelectTimer timer;
    bool allowBattleBoost;
    LolChampSelectLegacyChampSelectChatRoomDetails chatDetails;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection> myTeam;
    bool allowRerolling;
    std::vector<LolChampSelectLegacyChampSelectTradeContract> trades;
    std::vector<json> actions;
    uint32_t rerollsRemaining;
    bool allowSkinSelection;
    LolChampSelectLegacyChampSelectBannedChampions bans; 
  };
  void to_json(json& j, const LolChampSelectLegacyChampSelectSession& v) {
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
  void from_json(const json& j, LolChampSelectLegacyChampSelectSession& v) {
  v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection>>(); 
  v.isSpectating = j.at("isSpectating").get<bool>(); 
  v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
  v.timer = j.at("timer").get<LolChampSelectLegacyChampSelectTimer>(); 
  v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
  v.chatDetails = j.at("chatDetails").get<LolChampSelectLegacyChampSelectChatRoomDetails>(); 
  v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection>>(); 
  v.allowRerolling = j.at("allowRerolling").get<bool>(); 
  v.trades = j.at("trades").get<std::vector<LolChampSelectLegacyChampSelectTradeContract>>(); 
  v.actions = j.at("actions").get<std::vector<json>>(); 
  v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
  v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
  v.bans = j.at("bans").get<LolChampSelectLegacyChampSelectBannedChampions>(); 
  }
}