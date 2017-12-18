#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectChampSelectPlayerSelection.hpp"
#include "LolChampSelectChampSelectBannedChampions.hpp"
#include "LolChampSelectChampSelectTimer.hpp"
#include "LolChampSelectChampSelectTradeContract.hpp"
#include "LolChampSelectChampSelectChatRoomDetails.hpp"
namespace lol {
  struct LolChampSelectChampSelectSession { 
    LolChampSelectChampSelectChatRoomDetails chatDetails;
    bool isSpectating;
    bool allowBattleBoost;
    std::vector<LolChampSelectChampSelectPlayerSelection> myTeam;
    std::vector<LolChampSelectChampSelectPlayerSelection> theirTeam;
    std::vector<LolChampSelectChampSelectTradeContract> trades;
    bool allowSkinSelection;
    LolChampSelectChampSelectBannedChampions bans;
    bool allowRerolling;
    std::vector<json> actions;
    int64_t localPlayerCellId;
    uint32_t rerollsRemaining;
    LolChampSelectChampSelectTimer timer; 
  };
  inline void to_json(json& j, const LolChampSelectChampSelectSession& v) {
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
  inline void from_json(const json& j, LolChampSelectChampSelectSession& v) {
    v.chatDetails = j.at("chatDetails").get<LolChampSelectChampSelectChatRoomDetails>(); 
    v.isSpectating = j.at("isSpectating").get<bool>(); 
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection>>(); 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection>>(); 
    v.trades = j.at("trades").get<std::vector<LolChampSelectChampSelectTradeContract>>(); 
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
    v.bans = j.at("bans").get<LolChampSelectChampSelectBannedChampions>(); 
    v.allowRerolling = j.at("allowRerolling").get<bool>(); 
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
    v.timer = j.at("timer").get<LolChampSelectChampSelectTimer>(); 
  }
}