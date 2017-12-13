#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectLegacyChampSelectBannedChampions.hpp>
#include <lol/def/LolChampSelectLegacyChampSelectChatRoomDetails.hpp>
#include <lol/def/LolChampSelectLegacyChampSelectPlayerSelection.hpp>
#include <lol/def/LolChampSelectLegacyChampSelectTradeContract.hpp>
#include <lol/def/LolChampSelectLegacyChampSelectTimer.hpp>
namespace lol {
  struct LolChampSelectLegacyChampSelectSession { 
    LolChampSelectLegacyChampSelectChatRoomDetails chatDetails;
    bool isSpectating;
    bool allowBattleBoost;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection> myTeam;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection> theirTeam;
    std::vector<LolChampSelectLegacyChampSelectTradeContract> trades;
    bool allowSkinSelection;
    LolChampSelectLegacyChampSelectBannedChampions bans;
    bool allowRerolling;
    std::vector<json> actions;
    int64_t localPlayerCellId;
    uint32_t rerollsRemaining;
    LolChampSelectLegacyChampSelectTimer timer; 
  };
  void to_json(json& j, const LolChampSelectLegacyChampSelectSession& v) {
  j["chatDetails"] = v.chatDetails; 
  j["isSpectating"] = v.isSpectating; 
  j["allowBattleBoost"] = v.allowBattleBoost; 
  j["myTeam"] = v.myTeam; 
  j["theirTeam"] = v.theirTeam; 
  j["trades"] = v.trades; 
  j["allowSkinSelection"] = v.allowSkinSelection; 
  j["bans"] = v.bans; 
  j["allowRerolling"] = v.allowRerolling; 
  j["actions"] = v.actions; 
  j["localPlayerCellId"] = v.localPlayerCellId; 
  j["rerollsRemaining"] = v.rerollsRemaining; 
  j["timer"] = v.timer; 
  }
  void from_json(const json& j, LolChampSelectLegacyChampSelectSession& v) {
  v.chatDetails = j.at("chatDetails").get<LolChampSelectLegacyChampSelectChatRoomDetails>(); 
  v.isSpectating = j.at("isSpectating").get<bool>(); 
  v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
  v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection>>(); 
  v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection>>(); 
  v.trades = j.at("trades").get<std::vector<LolChampSelectLegacyChampSelectTradeContract>>(); 
  v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
  v.bans = j.at("bans").get<LolChampSelectLegacyChampSelectBannedChampions>(); 
  v.allowRerolling = j.at("allowRerolling").get<bool>(); 
  v.actions = j.at("actions").get<std::vector<json>>(); 
  v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
  v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
  v.timer = j.at("timer").get<LolChampSelectLegacyChampSelectTimer>(); 
  }
}