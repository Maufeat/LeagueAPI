#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectChampSelectTradeContract.hpp"
#include "LolChampSelectChampSelectBannedChampions.hpp"
#include "LolChampSelectChampSelectTimer.hpp"
#include "LolChampSelectChampSelectChatRoomDetails.hpp"
#include "LolChampSelectChampSelectPlayerSelection.hpp"
namespace lol {
  struct LolChampSelectChampSelectSession { 
    LolChampSelectChampSelectTimer timer;
    LolChampSelectChampSelectChatRoomDetails chatDetails;
    std::vector<LolChampSelectChampSelectPlayerSelection> myTeam;
    std::vector<LolChampSelectChampSelectPlayerSelection> theirTeam;
    std::vector<LolChampSelectChampSelectTradeContract> trades;
    std::vector<json> actions;
    LolChampSelectChampSelectBannedChampions bans;
    int64_t localPlayerCellId;
    bool isSpectating;
    bool allowSkinSelection;
    bool allowBattleBoost;
    bool allowRerolling;
    uint32_t rerollsRemaining; 
  };
  inline void to_json(json& j, const LolChampSelectChampSelectSession& v) {
    j["timer"] = v.timer; 
    j["chatDetails"] = v.chatDetails; 
    j["myTeam"] = v.myTeam; 
    j["theirTeam"] = v.theirTeam; 
    j["trades"] = v.trades; 
    j["actions"] = v.actions; 
    j["bans"] = v.bans; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["isSpectating"] = v.isSpectating; 
    j["allowSkinSelection"] = v.allowSkinSelection; 
    j["allowBattleBoost"] = v.allowBattleBoost; 
    j["allowRerolling"] = v.allowRerolling; 
    j["rerollsRemaining"] = v.rerollsRemaining; 
  }
  inline void from_json(const json& j, LolChampSelectChampSelectSession& v) {
    v.timer = j.at("timer").get<LolChampSelectChampSelectTimer>(); 
    v.chatDetails = j.at("chatDetails").get<LolChampSelectChampSelectChatRoomDetails>(); 
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection>>(); 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection>>(); 
    v.trades = j.at("trades").get<std::vector<LolChampSelectChampSelectTradeContract>>(); 
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.bans = j.at("bans").get<LolChampSelectChampSelectBannedChampions>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.isSpectating = j.at("isSpectating").get<bool>(); 
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.allowRerolling = j.at("allowRerolling").get<bool>(); 
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
  }
}