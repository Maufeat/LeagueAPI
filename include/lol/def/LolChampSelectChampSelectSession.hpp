#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectChampSelectBannedChampions.hpp"
#include "LolChampSelectChampSelectPlayerSelection.hpp"
#include "LolChampSelectChampSelectTimer.hpp"
#include "LolChampSelectChampSelectChatRoomDetails.hpp"
#include "LolChampSelectChampSelectTradeContract.hpp"
namespace lol {
  struct LolChampSelectChampSelectSession { 
    bool isSpectating;
    LolChampSelectChampSelectTimer timer;
    int64_t localPlayerCellId;
    std::vector<json> actions;
    bool allowBattleBoost;
    uint32_t rerollsRemaining;
    std::vector<LolChampSelectChampSelectTradeContract> trades;
    bool allowRerolling;
    std::vector<LolChampSelectChampSelectPlayerSelection> theirTeam;
    LolChampSelectChampSelectBannedChampions bans;
    bool allowSkinSelection;
    LolChampSelectChampSelectChatRoomDetails chatDetails;
    std::vector<LolChampSelectChampSelectPlayerSelection> myTeam; 
  };
  inline void to_json(json& j, const LolChampSelectChampSelectSession& v) {
    j["isSpectating"] = v.isSpectating; 
    j["timer"] = v.timer; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["actions"] = v.actions; 
    j["allowBattleBoost"] = v.allowBattleBoost; 
    j["rerollsRemaining"] = v.rerollsRemaining; 
    j["trades"] = v.trades; 
    j["allowRerolling"] = v.allowRerolling; 
    j["theirTeam"] = v.theirTeam; 
    j["bans"] = v.bans; 
    j["allowSkinSelection"] = v.allowSkinSelection; 
    j["chatDetails"] = v.chatDetails; 
    j["myTeam"] = v.myTeam; 
  }
  inline void from_json(const json& j, LolChampSelectChampSelectSession& v) {
    v.isSpectating = j.at("isSpectating").get<bool>(); 
    v.timer = j.at("timer").get<LolChampSelectChampSelectTimer>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
    v.trades = j.at("trades").get<std::vector<LolChampSelectChampSelectTradeContract>>(); 
    v.allowRerolling = j.at("allowRerolling").get<bool>(); 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection>>(); 
    v.bans = j.at("bans").get<LolChampSelectChampSelectBannedChampions>(); 
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
    v.chatDetails = j.at("chatDetails").get<LolChampSelectChampSelectChatRoomDetails>(); 
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection>>(); 
  }
}