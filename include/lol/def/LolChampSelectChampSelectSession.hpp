#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectChampSelectTimer.hpp"
#include "LolChampSelectChampSelectBannedChampions.hpp"
#include "LolChampSelectChampSelectChatRoomDetails.hpp"
#include "LolChampSelectChampSelectPlayerSelection.hpp"
#include "LolChampSelectChampSelectTradeContract.hpp"
namespace lol {
  struct LolChampSelectChampSelectSession { 
    std::vector<LolChampSelectChampSelectPlayerSelection> myTeam;
    bool allowRerolling;
    bool allowSkinSelection;
    std::vector<LolChampSelectChampSelectPlayerSelection> theirTeam;
    uint32_t rerollsRemaining;
    LolChampSelectChampSelectChatRoomDetails chatDetails;
    bool allowBattleBoost;
    LolChampSelectChampSelectBannedChampions bans;
    std::vector<json> actions;
    LolChampSelectChampSelectTimer timer;
    int64_t localPlayerCellId;
    bool isSpectating;
    std::vector<LolChampSelectChampSelectTradeContract> trades; 
  };
  inline void to_json(json& j, const LolChampSelectChampSelectSession& v) {
    j["myTeam"] = v.myTeam; 
    j["allowRerolling"] = v.allowRerolling; 
    j["allowSkinSelection"] = v.allowSkinSelection; 
    j["theirTeam"] = v.theirTeam; 
    j["rerollsRemaining"] = v.rerollsRemaining; 
    j["chatDetails"] = v.chatDetails; 
    j["allowBattleBoost"] = v.allowBattleBoost; 
    j["bans"] = v.bans; 
    j["actions"] = v.actions; 
    j["timer"] = v.timer; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["isSpectating"] = v.isSpectating; 
    j["trades"] = v.trades; 
  }
  inline void from_json(const json& j, LolChampSelectChampSelectSession& v) {
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection>>(); 
    v.allowRerolling = j.at("allowRerolling").get<bool>(); 
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection>>(); 
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
    v.chatDetails = j.at("chatDetails").get<LolChampSelectChampSelectChatRoomDetails>(); 
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.bans = j.at("bans").get<LolChampSelectChampSelectBannedChampions>(); 
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.timer = j.at("timer").get<LolChampSelectChampSelectTimer>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.isSpectating = j.at("isSpectating").get<bool>(); 
    v.trades = j.at("trades").get<std::vector<LolChampSelectChampSelectTradeContract>>(); 
  }
}